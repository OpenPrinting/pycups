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
