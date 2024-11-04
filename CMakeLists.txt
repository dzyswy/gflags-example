cmake_minimum_required (VERSION 3.16)
project (myproj VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

find_package (gflags REQUIRED)

add_executable (myapp main.cpp)
target_link_libraries (myapp gflags)

