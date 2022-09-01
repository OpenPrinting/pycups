#ifndef _CUPSPYTHON_INTERNAL_H_
# define _CUPSPYTHON_INTERNAL_H

#include <Python.h>
#include <stdarg.h>

static void _pycups_wrapper_void(PyObject *ob, void func(PyObject*));
static PyTypeObject * _pycups_Py_TYPE(PyObject *ob);
static void * _pycups_PyModule_GetState(PyObject *ob);
static PyObject * _pycups_PyUnicode_Decode(const char *s, Py_ssize_t size, const char *encoding, const char *errors);
static void _pycups_PyErr_Clear();
static int _pycups_PyUnicode_Check(PyObject *ob);
#endif
