#include <iostream>
#include <string>
using namespace std;

#ifndef PROYECTOALUMNOS_DATOS_H
#define PROYECTOALUMNOS_DATOS_H

class personas{
private:
    int dni;
    string nombre;
    string apellido;
    string email;
public:
    personas();
    personas(int dni,string nombre, string apellido, string email);
    void setdni(int x);
    void setnombre(string x);
    void setapellido(string x);
    void setemail(string x);

    int getdni();
    string getnombre();
    string getapellido();
    string getemail();

    virtual void imprimir();
};


#endif //PROYECTOALUMNOS_DATOS_H
