cmake_minimum_required(VERSION 3.10.2)
project(poo2_pc3_2021_0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/${OUTPUT_DEBUG})
if(UNIX AND NOT APPLE)
    set(CMAKE_CXX_FLAGS -pthread)
endif()

add_executable(poo2_pc3_2021_0
  main.cpp 
  test_1_1.cpp
  test_1_2.cpp
  test_1_3.cpp
  test_1_4.cpp
  p1.h p1.cpp
  )

configure_file(test_1_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_1_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_1_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_1_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
