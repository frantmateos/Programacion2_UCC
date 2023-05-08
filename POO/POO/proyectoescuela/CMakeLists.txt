cmake_minimum_required(VERSION 3.24)
project(proyectoescuela)

set(CMAKE_CXX_STANDARD 17)

add_executable(proyectoescuela main.cpp datos.h datos.cpp docente.h docente.cpp alumnos.h alumnos.cpp todoslosdocentes.h todoslosdocentes.cpp todoslosalumnos.h todoslosalumnos.cpp materia.h materia.cpp todasmaterias.h todasmaterias.cpp)
