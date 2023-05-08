cmake_minimum_required(VERSION 3.24)
project(ejercicio_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ejercicio_1
        actores.cpp
        actores.h
        main.cpp pelicula.h pelicula.cpp datos.cpp)
