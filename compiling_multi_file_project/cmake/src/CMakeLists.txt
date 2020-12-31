# adding the subdirectory containing source files needed to create *sum* object.
add_subdirectory("sum")

# creating *main* object
add_executable(out main.cpp)

# linking *sum* object to the *main* object to create final executable object *out*
target_link_libraries(out sum)
