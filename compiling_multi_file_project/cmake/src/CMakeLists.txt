add_subdirectory("sum")

add_executable(out main.cpp)
target_link_libraries(out sum)
