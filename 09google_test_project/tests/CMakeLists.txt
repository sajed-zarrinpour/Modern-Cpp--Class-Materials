add_subdirectory(/usr/src/googletest
    ${PROJECT_BINARY_DIR}/gtest)
include(CTest)

add_executable(test_sum test_sum.cpp)
target_link_libraries(test_sum
    tools
    gtest gtest_main)
add_test(NAME test_sum COMMAND $<TARGET_FILE:test_sum>)
