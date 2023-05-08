#include <iostream>
#include <string>
using namespace std;
#include "actores.h"
#ifndef EJERCICIO_1_PELICULA_H
#define EJERCICIO_1_PELICULA_H
class pelicula:public actores{
private:
    int duracion;
    string categoria;
public:
    pelicula() = default;

    void setduracion(int x);
    void setcategoria(string x);

    int getduracion();
    string getcategoria();

    void alta();
    void imprimir();

};
#endif //EJERCICIO_1_PELICULA_H
