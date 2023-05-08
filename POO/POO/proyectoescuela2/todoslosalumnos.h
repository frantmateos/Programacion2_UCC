#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "alumnos.h"

#ifndef PROYECTOESCUELA_TODOSLOSALUMNOS_H
#define PROYECTOESCUELA_TODOSLOSALUMNOS_H
class todoslosalumnos{
private:
    int contador =0;
    alumnos* todosalumni[100];
public:
    todoslosalumnos() =default;

    void agregaralumnos ();
    void mostraralumnos();

    alumnos* buscaralumnos(int x);


};
#endif //PROYECTOESCUELA_TODOSLOSALUMNOS_H
