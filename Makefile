PYTHON=python3
NAME=pycups
RPMCONFIGDIR:=$(shell rpm -E "%{_rpmconfigdir}" 2>/dev/null || :)

SOURCES=cupsmodule.c cupsconnection.c cupsppd.c cupsipp.c \
	cupsppd.h cupsipp.h cupsconnection.h cupsmodule.h \
	psdriver.attr postscriptdriver.prov

DIST=Makefile test.py \
	examples \
	COPYING NEWS README TODO

cups.so: force
	meson setup builddir || true
	meson compile -C builddir
	ln -sf $$(ls builddir/cups.cpython-*.so 2>/dev/null | head -1) cups.so

doc:	cups.so
	rm -rf html
	$(PYTHON) -m pydoc -w cups
	mkdir html
	mv cups.html html

doczip:	doc
	cd html && zip ../cups-html.zip *

clean:
	-rm -rf builddir dist cups.so html *.pyc *~ __pycache__

dist:
	$(PYTHON) -m build --sdist

install:	install-rpmhook
	$(PYTHON) -m pip install --no-build-isolation .

install-rpmhook:
	if [ -n "$(RPMCONFIGDIR)" ]; then \
		RPMCONFIG="$$DESTDIR$(RPMCONFIGDIR)" ; \
		mkdir -p "$$RPMCONFIG"/fileattrs ; \
		install -m0644 psdriver.attr "$$RPMCONFIG"/fileattrs/ ; \
		install -m0755 postscriptdriver.prov "$$RPMCONFIG"/ ; \
	fi

.PHONY: doc doczip clean dist install install-rpmhook force
