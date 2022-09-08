#include "cupspython-internal.h"
#include <stdarg.h>


static void _pycups_wrapper_void(PyObject *ob, void func(PyObject*))
{
  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  func(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);
}

static PyTypeObject * _cups_Py_TYPE(PyObject *ob)
{
  PyTypeObject * t = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  t = Py_TYPE(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return t;
}

static void * _cups_PyModule_GetState(PyObject *ob)
{
  void * state = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  state = PyModule_GetState(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return state;
}

static PyObject * _pycups_PyUnicode_Decode(const char *s, Py_ssize_t size, const char *encoding, const char *errors)
{
  PyObject *ob = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ob = PyUnicode_Decode(s, size, encoding, errors);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ob;
}

static void _pycups_PyErr_Clear()
{
  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  PyErr_Clear();

  // release global interpret lock
  PyGILState_Release(gilstate);
}

static int _pycups_PyUnicode_Check(PyObject *ob)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyUnicode_Check(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static char * _pycups_PyBytes_AsString(PyObject *ob)
{
  char * str = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  str = PyBytes_AsString(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return str;
}

static PyObject * _pycups_PyUnicode_AsUTF8String(PyObject *ob)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyUnicode_AsUTF8String(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyBytes_Check(PyObject *ob)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyBytes_Check(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyUnicode_FromEncodedObject(PyObject *ob, const char *encoding, const char *errors)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyUnicode_FromEncodedObject(ob, encoding, errors);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static void _pycups_PyErr_SetString(PyObject *type, const char *message)
{
  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  PyErr_SetString(type, message);

  // release global interpret lock
  PyGILState_Release(gilstate);
}

static PyObject * _pycups_PyUnicode_FromString(const char *v)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyUnicode_FromString(v);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyEval_CallObject(PyObject *x, PyObject *args)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyEval_CallObject(x, args);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyErr_Occurred()
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyErr_Occurred();

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyDict_New()
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyDict_New();

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyType_GenericNew(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyType_GenericNew(type, args, kwds);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyDict_SetItem(PyObject *p, PyObject *key, PyObject *val)
{
  int ret = -1;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyDict_SetItem(p, key, val);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyLong_Check(PyObject *ob)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyLong_Check(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static long _pycups_PyLong_AsLong(PyObject *ob)
{
  long ret = -1;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyLong_AsLong(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyLong_FromLong(long v)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyLong_FromLong(v);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyBool_FromLong(long v)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyBool_FromLong(v);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyList_New(Py_ssize_t len)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyList_New(len);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyList_Append(PyObject *list, PyObject *item)
{
  int ret = -1;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyList_Append(list, item);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyDict_SetItemString(PyObject *p, const char *key, PyObject *val)
{
  int ret = -1;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyDict_SetItemString(p, key, val);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyList_Check(PyObject *ob)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyList_Check(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static Py_ssizet_t _pycups_PyList_Size(PyObject *list)
{
  Py_ssize_t ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyList_Size(list);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyList_GetItem(PyObject *list, Py_ssize_t index)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyList_GetItem(list, index);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyErr_SetFromErrno(PyObject *type)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyErr_SetFromErrno(type);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyDict_Check(PyObject *ob)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyDict_Check(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyDict_Next(PyObject *p, Py_ssize_t *ppos, PyObject **pkey, PyObject **pvalue)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyDict_Next(p, ppos, pkey, pvalue);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyObject_AsFileDescriptor(PyObject *ob)
{
  int ret = -1;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyObject_AsFileDescriptor(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyObject_TypeCheck(PyObject *ob, PyTypeObject *type)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyObject_TypeCheck(ob, type);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyBool_Check(PyObject *ob)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyBool_Check(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyFloat_Check(PyObject *ob)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyFloat_Check(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static double _pycups_PyFloat_AsDouble(PyObject *ob)
{
  double ret = -1.0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyFloat_AsDouble(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PySequence_Check(PyObject *ob)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PySequence_Check(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static Py_ssize_t _pycups_PySequence_Size(PyObject *ob)
{
  Py_ssize_t ret = -1;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PySequence_Size(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PySequence_GetItem(PyObject *ob, Py_ssize_t i)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PySequence_GetItem(ob, i);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyTuple_New(Py_ssize_t len)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyTuple_New(len);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyTuple_SetItem(PyObject *p, Py_ssize_t pos, PyObject *o)
{
  int ret = -1;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyTuple_SetItem(p, pos, o);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyFloat_FromDouble(double v)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyFloat_FromDouble(v);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static const char * _pycups_PyUnicode_AsUTF8(PyObject *ob)

{
  const char * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyUnicode_AsUTF8(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static int _pycups_PyCallable_Check(PyObject *ob)
{
  int ret = 0;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyCallable_Check(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyUnicode_FromObject(PyObject *ob)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyUnicode_FromObject(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static Py_ssize_t _pycups_PyUnicode_GetLength(PyObject *ob)
{
  Py_ssize_t ret = -1;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyUnicode_GetLength(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static Py_ssize_t _pycups_PyUnicode_AsWideChar(PyObject *ob, wchar_t *w, Py_ssize_t size)
{
  Py_ssize_t ret = -1;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyUnicode_AsWideChar(ob, w, size);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyModule_Create(PyModuleDef *def)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyModule_Create(def);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}

static PyObject * _pycups_PyModule_GetDict(PyObject *ob)
{
  PyObject * ret = NULL;

  /* CPython API needs to be run only when our process holds
   * Python global interpret lock */
  PyGILState_STATE gilstate;
  gilstate = PyGILState_Ensure();

  ret = PyModule_GetDict(ob);

  // release global interpret lock
  PyGILState_Release(gilstate);

  return ret;
}
