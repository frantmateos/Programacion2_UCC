#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "docente.h"
#include "alumnos.h"
#ifndef PROYECTOALUMNOS_MATERIA_H
#define PROYECTOALUMNOS_MATERIA_H
class personas;
class docente;
class alumnos;

class materia{
private:
    int* codigo;
    string nombre;
    int* notas;
    int cantidad;

    alumnos* a;
    docente* d;
public:
    materia();
    materia(int *cod, string nom);
    void setcodigo(int x);
    void setnombre(string x);
    void setnotas(int x);
    void setalumnos(alumnos* a);
    void setdocente(docente* d);

    int* getcodigo();
    string getnombre();
    int* getnotas();
    alumnos* getalumnos();
    docente* getdocente();

};
#endif //PROYECTOALUMNOS_MATERIA_H
