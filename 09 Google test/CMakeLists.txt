project(google_tests_project)
cmake_minimum_required(VERSION 3.0)

message(STATUS "The Project SOURCE Directory is $(PROJECT_SOURCE_DIR)")
#if u prefer <> sign over "" for includes, uncomment the following line
#include_directories(${project_source_dir}/src)
add_subdirectory(src)

# Adding google tests to the project
enable_testing()
add_subdirectory(${PROJECT_SOURCE_DIR}/tests)

