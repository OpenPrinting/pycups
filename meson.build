project('pycups', 'c',
  version: '2.0.4',
  license: 'GPL-2.0-or-later',
  meson_version: '>=1.1',
)

py = import('python').find_installation(pure: false)
cc = meson.get_compiler('c')

cups_dep = dependency('cups')

deps = [cups_dep]

if host_machine.system() == 'darwin' or host_machine.system() == 'freebsd'
  deps += cc.find_library('iconv')
endif

py.extension_module('cups',
  'cupsmodule.c',
  'cupsconnection.c',
  'cupsppd.c',
  'cupsipp.c',
  dependencies: deps,
  c_args: ['-DVERSION="@0@"'.format(meson.project_version())],
  install: true,
)
