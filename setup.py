from distutils.core import setup, Extension

helloModule = Extension('hello',
                    sources = ['hello.cpp'])

setup (name = 'hello',
       version = '1.0',
       description = 'This is a demo package',
       ext_modules = [helloModule])