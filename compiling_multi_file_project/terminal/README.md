# compiling from terminal directly

We need to compile modules into objects, then linking them to the final binary.
To create an object from a module, we need to tell the compiler to view it as a single file and just compile it.
We can do this by *-c* flag:
```
c++ -std=c++17 -c sum.cpp
```
Then we compile the actual file, linking the object to it
```
c++ -std=c++17 -g main.cpp sum.o
```
