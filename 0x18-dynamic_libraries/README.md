Creating and linking dynamic libraries with other c files.

- A dynamic library is a library that is not linked into a program at compile time, but instead is loaded into memory and linked at run time.

# Creating a dynamic library

- To create a dynamic library we first need to create a source file that contains the functions and data, whether it is a header file or a simple source c file.

- Then, we have to compile the source file into an object file

```
gcc -shared -o libcustom.so main.h
```

# Linking the dynamic library to the a program

```
gcc -llibcustom myapp.c -o myapp
```
