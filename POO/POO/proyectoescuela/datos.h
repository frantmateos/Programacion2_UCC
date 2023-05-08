#include <iostream>
#include <string>
using namespace std;

#ifndef PROYECTOESCUELA_DATOS_H
#define PROYECTOESCUELA_DATOS_H
class personas{
private:
    int dni;
    string nombre;
    string apellido;
    string email;
public:
    personas() =default;

    void setdni(int x);
    void setnombre(string x);
    void setapellido(string x);
    void setemail(string x);

    int getdni();
    string getnombre();
    string getapellido();
    string getemail();

    virtual void imprimir();
    virtual void alta();

};

#endif //PROYECTOESCUELA_DATOS_H
