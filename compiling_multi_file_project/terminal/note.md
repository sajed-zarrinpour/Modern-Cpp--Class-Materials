# compiling from terminal directly
first we compile the library with flag -c, which tells the compiler 
to just compile and make an object.
    c++ -std=c++17 -c sum.cpp
Then we compile the actual file, linking the object to it
    c++ -std=c++17 -g main.cpp sum.o
