# 3D-Computer-Vision
OpenCV C++ code where I create 3D computer vision application modules. Repo contains calls that use basic as well as advanced openCV libraries. Modules could be further customized and/or cascaded to achieve complex 3D computer vision purposes. 

## What I learned
### Installation of OpenCV
OpenCV is a bit complex to install due to its numerous dependencies and the vast possible flags/switches that can be enabled/disabled at installation time. My recommendation in reference to installation of OpenCV is accessible in a comment, [here](https://github.com/opencv/opencv/issues/22646#issuecomment-1368427549).

### Steps to building dynamic library (shared object .so)
Shared objects are dynamic libraries. They get linked to programs at runtime hence the term "dynamic linking". To build a shared object from cpp files follow the following procedure:
```
gcc -c function1.c function2.c -fpic    //Produces object files function1.o and function2.o
gcc function1.o function2.o -shared -o lib_calc.so    //Creates the shared library lib_calc.so
gcc -c main.c -o main.o    //Compiles main.c and outputs main.o
gcc -o output main.o -L. -l_calc    //Links main.o with the shared library
```
The final executable of main (i.e. the file named output in the last command) is linked with the library lib_calc.so. To check the dependencies of the file output 
```
ldd output    //Shows dynamic dependency of the file output
```
Note that the loader must see lib_calc.so in /usr/lib. Alternatively, the loader path that contains lib_calc.so must be added to LD_LIBRARY_PATH, in a terminal do this:
```
export LD_LIBRARY_PATH=:/dir/where/lib_calc.so/exists
echo $LD_LIBRARY_PATH
```
### Steps to building static library (.a)
<source code file .c> -> |compiler| -> object file .o + library -> |linker| -> executable code
Linker makes available of library functions at runtime. Library function code doesn't execute (can't be executable) normally because it contains no main()
```
gcc -c lib_add.c -o lib_add.o
gcc -c lib_sub.c -o lib_sub.o
ar rcs lib_calc.a lib_add.o lib_sub.o    //Creates static library lib_calc.a
gcc -o main.c main.o -L. lib_calc.a
```
