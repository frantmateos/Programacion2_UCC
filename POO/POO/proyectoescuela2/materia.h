
#ifndef PROYECTOALUMNOS_MATERIA_H
#define PROYECTOALUMNOS_MATERIA_H
#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "docente.h"
#include "alumnos.h"

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
    //int notas[100][2];


    alumnos* a;
    //docente* d;
public:
    materia() = default;

    void setcodigo(int x);
    void setnombre(string x);
    //void setnotas(int x, int num);
    //void setnotas(alumnos *a,int num);
    //void setalumnos(string nombre);
    void setnota(alumnos*a , int num);
    void setalumnos(alumnos* a);
    void setdocente(string nombre);

    int getcodigo();
    string getnombre();
    int getcantidad();
    void getnotas();
    void mostrarnotas();
    string getalumnos();


    void crear();
    void mostrar();
    void mostrarcompleta();
    void cargarnotas(int n,int dni);

};
#endif //PROYECTOALUMNOS_MATERIA_H
