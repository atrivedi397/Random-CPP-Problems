cmake_minimum_required(VERSION 3.10)
project(Scratches)

set(CMAKE_CXX_STANDARD 17)

set(BUILD1 single_linked_list.cpp)
add_executable(BUILD1 single_linked_list.cpp)

set(BUILD2 Standard_deviation.cpp)
add_executable(BUILD2 Standard_deviation.cpp)

set(BUILD3 Array_rotation.cpp)
add_executable(BUILD3 Array_rotation.cpp)

set(BUILD4 find_second_largest.cpp)
add_executable(BUILD4 find_second_largest.cpp)

set(BUILD5 linked_list_from_array.cpp)
add_executable(BUILD5 linked_list_from_array.cpp)

set(BUILD6 occurence.cpp)
add_executable(BUILD6 occurence.cpp)

set(BUILD7 BUILD7)
set(BUILD7_file LongestCommonSubSequence.cpp)
add_executable(${BUILD7} ${BUILD7_file})

set(BUILD8 reverse_linked_list.cpp)
add_executable(BUILD8 reverse_linked_list.cpp)

set(SieveOfEratosthenes.cpp SieveOfEratosthenes.cpp)
add_executable(SieveOfEratosthenes.cpp SieveOfEratosthenes.cpp)

add_executable(GraphDefinition GraphDefinition.cpp)
add_executable(SeparateProcess SeparateProcess.c)