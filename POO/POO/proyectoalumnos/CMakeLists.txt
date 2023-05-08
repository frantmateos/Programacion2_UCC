cmake_minimum_required(VERSION 3.24)
project(proyectoalumnos)

set(CMAKE_CXX_STANDARD 17)

add_executable(proyectoalumnos main.cpp datos.h datos.cpp materia.h materia.cpp docente.cpp docente.h alumnos.cpp alumnos.h)
