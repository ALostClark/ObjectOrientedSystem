cmake_minimum_required(VERSION 3.13)
project(CL_Adventure_game)

set(CMAKE_CXX_STANDARD 14)

add_executable(CL_Adventure_game main.cpp Enemy.cpp Enemy.h Player.cpp Player.h Battle.cpp Battle.h Map.cpp Map.h Run.cpp Run.h MapGenerator.cpp MapGenerator.h)