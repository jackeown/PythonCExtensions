
#include <Python.h>





// Step 1. Define functions that your module will contain 
//-----------------------------------------------------------------------------
static PyObject *sayHello(PyObject *self, PyObject *args)
{
  // Unpack a string from the arguments
  const char *strArg;
  if (!PyArg_ParseTuple(args, "s", &strArg))
    return NULL;

  // Print message and return None
  PySys_WriteStdout("Hello, %s!\n", strArg);
  Py_RETURN_NONE;
}





// Step 2. Package them together as an array of PyMethodDefs
//-----------------------------------------------------------------------------
static PyMethodDef functions[] = {
  {
    "sayHello",
    sayHello,
    METH_VARARGS,
    "Prints back 'Hello <param>', for example example: hello.sayHello('you')"
  },

  {NULL, NULL, 0, NULL}        /* Sentinel */
};






// Step 3. Define the hello module.
//-----------------------------------------------------------------------------
static struct PyModuleDef hello_module_def = {
  PyModuleDef_HEAD_INIT,
  "hello",
  "Internal 'hello' module",
  -1,
  functions
};





// Step 4. Not sure how this is different from step 3.
//-----------------------------------------------------------------------------
PyMODINIT_FUNC PyInit_hello(void)
{
  return PyModule_Create(&hello_module_def);
}
