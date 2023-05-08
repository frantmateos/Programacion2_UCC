#include <iostream>
#include <string>
using namespace std;

#ifndef EJERCICIO_1_DATOS_H
#define EJERCICIO_1_DATOS_H

class datos{
private:
    string nombre;
    string clasificacion;
public:
    datos() =default;

    void setnombre(string x);
    void setclasificaion(string x);

    string getnombre();
    string getclsificacion();

    virtual void imprimir();
    virtual void alta();
};


#endif //EJERCICIO_1_DATOS_H
