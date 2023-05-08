


#ifndef PROYECTOESCUELA_ALUMNOS_H
#define PROYECTOESCUELA_ALUMNOS_H
#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "materia.h"
class materia;

class alumnos:public personas{
private:
    int edad;
    string carrera;
    int cantidad = 0;
    string mate[100];
    int notas[100];

    materia* m;
public:
    alumnos() =default;

    void setedad(int x);
    void setcarrera(string x);
    void setmateria(materia* m);

    int getedad();
    string getcarrera();

    void alta();
    void imprimir();
};
#endif //PROYECTOESCUELA_ALUMNOS_H
