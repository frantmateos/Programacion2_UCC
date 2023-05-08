#include <iostream>
#include <string>
using namespace std;
#include "datos.h"


#ifndef PROYECTOESCUELA_ALUMNOS_H
#define PROYECTOESCUELA_ALUMNOS_H

class alumnos:public personas{
private:
    int edad;
    string carrera;
public:
    alumnos() =default;

    void setedad(int x);
    void setcarrera(string x);

    int getedad();
    string getcarrera();

    void alta();
    void imprimir();
};
#endif //PROYECTOESCUELA_ALUMNOS_H
