cmake_minimum_required(VERSION 2.8.9)
project(asmt2)
set(CMAKE_CXX_FLAGS "-std=c++11")
add_executable(main main.cpp compute-pi.cpp compute-e.cpp compute-fib.cpp)
