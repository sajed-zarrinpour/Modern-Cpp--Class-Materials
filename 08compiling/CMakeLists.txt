# cmake template
# run this with cmake -C source_folder -B build_folder
# then make -C build_folder
cmake_minimum_required(VERSION <yourversion>)
project(<projectName>)
#to compile with c++ 11
set(CMAKE_CXX_STANDARD 11)
#to set debug/release modes:
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
#setting some additional flags
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
#include_directories(include)
add_executable(${PROJECT_NAME} main.cpp func.cpp)


# it is a good practice to do compile static libraries this way
# 1 - create a directory for that library
# 2 - create a CMakeLists.txt file int that directory
# 3 - add library to that cmake list file:
#     add_library(libname libsource.cpp)
add_subdirectory(<directory_name>)
target_include_directories(${PROJECT_NAME} PUBLIC <directory_name>)
target_include_directories(${PROJECT_NAME} PRIVATE <directory_name>)
target_link_libraries(${PROJECT_NAME} libname)

# to use shared libraries 
#suppose we want to use libtools.so
add_library(tools SHARED IMPORTED)
set_property(TARGET tools PROPERTY_IMPORTED_LOCATION
    "${LIBRARY_OUTPUT_PATH}/libtools.so")

# using github libraries with your code
# init a git repository
# dont forget to create a .gitignore file to tell git ignore build and
# cmakefiles search online for it
# to actually add a library from github type this in the terminal
#git submodule add <git_repo_url> external/<repo_name>
