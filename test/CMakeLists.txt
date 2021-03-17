cmake_minimum_required(VERSION 3.0.0)


add_executable (mytest test.cpp)

target_link_libraries(mytest MathFunctions gtest gtest_main)