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

class materia{//:public personas{
private:
    int codigo;
    string nombre;
    int cantidad =0;
    int cantnotas = 0;
    string alumno[100];
    string apellidos[100];
    string docente;
    int valor =0;
    int dni;
    int nota[100][100];



    alumnos* a;
    //docente* d;
public:
    materia() = default;

    void setcodigo(int x);
    void setnombre(string x);
    void setnota(alumnos*a , int num);
    void setalumnos(alumnos* a);
    void setdocente(string nombre);

    int getcodigo();
    char getnombre();
    int getcantidad();
    void getnotas();
    void mostrarnotas();
    string getalumnos();


    void crear();
    void mostrar();


};
#endif //PROYECTOALUMNOS_MATERIA_H
