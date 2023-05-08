#include <iostream>
#include <string>
using namespace std;
#include "datos.h"

#ifndef PROYECTOESCUELA_DOCENTE_H
#define PROYECTOESCUELA_DOCENTE_H

class docente: public personas{
private:
    string titulo;
public:
    docente()= default;

    void settitulo(string x);
    string gettitulo();
    void alta();
    void imprimir();


};
#endif //PROYECTOESCUELA_DOCENTE_H
