#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "materia.h"

#ifndef PROYECTOESCUELA_TODASMATERIAS_H
#define PROYECTOESCUELA_TODASMATERIAS_H

class todaslasmaterias{
private:
    int contador = 0;
    materia* todaslasmati[100];
public:
    todaslasmaterias() =default;
    void agregarmaterias();
    void mostrarmaterias();

    materia* buscarmateria(int x);
};
#endif //PROYECTOESCUELA_TODASMATERIAS_H
