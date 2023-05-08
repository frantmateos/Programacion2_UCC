#include <iostream>
#include <string>
#include "datos.h"
using namespace std;

#ifndef EJERCICIO_1_ACTORES_H
#define EJERCICIO_1_ACTORES_H

class actores:public datos{
private:
    int edad;
    string sexo;
public:
    actores() = default;

    void setedad(int x);
    void setsexo(string x);


    int getedad();
    string getsexo();

    void imprimir();
    void alta();
};


#endif //EJERCICIO_1_ACTORES_H
