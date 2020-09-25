# PythonCExtensions - A minimal example of C and C++ extensions for Python.

To build the C/C++ extension module, run the following:
```bash
python setup.py build
```

This will create a `build` directory containing a `lib` directory. 
If the shared object file (.so extension on linux) inside this lib directory is in your `pythonpath`, 
then you should be able to import and use your new module from python like this:

```python
import hello
hello.sayHello("World")
```
