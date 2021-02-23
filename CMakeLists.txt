cmake_minimum_required(VERSION 3.16)
project(leetcode_cpp)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest)
enable_testing()

add_subdirectory(1_two_sum)
add_subdirectory(134_gas_station)
