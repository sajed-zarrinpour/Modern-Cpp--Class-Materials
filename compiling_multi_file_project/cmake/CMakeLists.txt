#minimum cmake version required to compile our code
cmake_minimum_required(VERSION 3.4)

# project name
project(multi_file)

# settin constants
#  c++ standard is c++17
set(CMAKE_CXX_STANDARD 17)
#  compilation flags
set(CMAKE_CXX_FLAGS "-Wall")

# adding a subdirectory
add_subdirectory(src)
