#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "materia.h"
#ifndef PROYECTOALUMNOS_DOCENTE_H
#define PROYECTOALUMNOS_DOCENTE_H

class materia;
class docente:public personas{
private:
    string titulo;
public:
    docente();
    docente(int dni,std::string nombre, std::string apellido, std::string email,std::string titulo);

    void settitulo(string x);
    string gettitulo();

    void inscribir(materia* m, int* c);
};
#endif //PROYECTOALUMNOS_DOCENTE_H
