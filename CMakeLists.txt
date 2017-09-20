cmake_minimum_required(VERSION 3.8)
project(patrol_routes_gen)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/Node.cpp src/Node.h src/Edge.cpp src/Edge.h src/Grasp.cpp src/Grasp.h src/BestFirst.cpp src/BestFirst.h)
add_executable(patrol_routes_gen ${SOURCE_FILES})