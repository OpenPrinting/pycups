#ifndef _CUPSPYTHON_INTERNAL_H_
# define _CUPSPYTHON_INTERNAL_H

#include <Python.h>

static PyTypeObject * _pycups_Py_TYPE(PyObject *ob);
static int            _pycups_PyBool_Check(PyObject *ob);
static PyObject *     _pycups_PyBool_FromLong(long v);
static char *         _pycups_PyBytes_AsString(PyObject *ob);
static int            _pycups_PyBytes_Check(PyObject *ob);
static int            _pycups_PyCallable_Check(PyObject *ob);
static int            _pycups_PyDict_Check(PyObject *ob);
static PyObject *     _pycups_PyDict_New();
static int            _pycups_PyDict_Next(PyObject *p, Py_ssize_t *ppos, PyObject **pkey, PyObject **pvalue);
static int            _pycups_PyDict_SetItem(PyObject *p, PyObject *key, PyObject *val);
static int            _pycups_PyDict_SetItemString(PyObject *p, const char *key, PyObject *val);
static void           _pycups_PyErr_Clear();
static PyObject *     _pycups_PyErr_Occurred();
static PyObject *     _pycups_PyErr_SetFromErrno(PyObject *type);
static void           _pycups_PyErr_SetString(PyObject *type, const char *message);
static PyObject *     _pycups_PyEval_CallObject(PyObject *x, PyObject *args);
static double         _pycups_PyFloat_AsDouble(PyObject *ob);
static int            _pycups_PyFloat_Check(PyObject *ob);
static PyObject *     _pycups_PyFloat_FromDouble(double v);
static int            _pycups_PyList_Append(PyObject *list, PyObject *item);
static int            _pycups_PyList_Check(PyObject *ob);
static PyObject *     _pycups_PyList_GetItem(PyObject *list, Py_ssize_t index);
static PyObject *     _pycups_PyList_New(Py_ssize_t len);
static Py_ssizet_t    _pycups_PyList_Size(PyObject *list);
static long           _pycups_PyLong_AsLong(PyObject *ob);
static int            _pycups_PyLong_Check(PyObject *ob);
static PyObject *     _pycups_PyLong_FromLong(long v);
static PyObject *     _pycups_PyModule_Create(PyModuleDef *def);
static PyObject *     _pycups_PyModule_GetDict(PyObject *ob);
static void *         _pycups_PyModule_GetState(PyObject *ob);
static int            _pycups_PyObject_AsFileDescriptor(PyObject *ob);
static int            _pycups_PyObject_TypeCheck(PyObject *ob, PyTypeObject *type);
static int            _pycups_PySequence_Check(PyObject *ob);
static PyObject *     _pycups_PySequence_GetItem(PyObject *ob, Py_ssize_t i);
static Py_ssize_t     _pycups_PySequence_Size(PyObject *ob);
static PyObject *     _pycups_PyType_GenericNew(PyTypeObject *type, PyObject *args, PyObject *kwds);
static const char *   _pycups_PyUnicode_AsUTF8(PyObject *ob);
static PyObject *     _pycups_PyUnicode_AsUTF8String(PyObject *ob);
static Py_ssize_t     _pycups_PyUnicode_AsWideChar(PyObject *ob, wchar_t *w, Py_ssize_t size);
static int            _pycups_PyUnicode_Check(PyObject *ob);
static PyObject *     _pycups_PyUnicode_Decode(const char *s, Py_ssize_t size, const char *encoding, const char *errors);
static PyObject *     _pycups_PyUnicode_FromEncodedObject(PyObject *ob, const char *encoding, const char *errors);
static PyObject *     _pycups_PyUnicode_FromObject(PyObject *ob);
static PyObject *     _pycups_PyUnicode_FromString(const char *v);
static Py_ssize_t     _pycups_PyUnicode_GetLength(PyObject *ob);
static PyObject *     _pycups_PyTuple_New(Py_ssize_t len);
static int            _pycups_PyTuple_SetItem(PyObject *p, Py_ssize_t pos, PyObject *o);
static void           _pycups_wrapper_void(PyObject *ob, void func(PyObject*));
#endif
