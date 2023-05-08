#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "materia.h"
#ifndef PROYECTOALUMNOS_ALUMNOS_H
#define PROYECTOALUMNOS_ALUMNOS_H

class materia;
class personas;
class alumnos:public personas{
private:
    string carrera;
    int edad;
public:
    alumnos();
    alumnos(int dni,string nombre, string apellido, string email, string carrera, int edad);

    void setcarrera(string x);
    void setedad(int x);

    string getcarrera();
    int getedad();

    void inscribir(materia* m,int* c);
    void cargarnotas(materia* m,int* c, int n);

};
#endif //PROYECTOALUMNOS_ALUMNOS_H

