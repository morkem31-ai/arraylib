cmake_minimum_required(VERSION 3.10)
project(arraylib)

set(CMAKE_CXX_STANDARD 17)

add_library(arraylib STATIC arraylib.cpp)
add_executable(app main.cpp)
target_link_libraries(app PRIVATE arraylib)
enable_testing()
add_executable(test_arraylib tests/test_arraylib.cpp)
target_link_libraries(test_arraylib PRIVATE arraylib)
add_test(NAME ArrayTests COMMAND test_arraylib)