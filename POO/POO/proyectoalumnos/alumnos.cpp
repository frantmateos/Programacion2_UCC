#include <iostream>
#include <string>
using namespace std;

#include "datos.h"
#include "materia.h"
#include "alumnos.h"
#include "docente.h"

alumnos::alumnos(int dni, string nombre, string apellido, string email, string car, int ed): personas(dni,nombre,apellido,email) {
    carrera = car;
    edad = ed;

}

void alumnos::setcarrera(string x) {
    carrera = x;
}
void alumnos::setedad(int x) {
    edad = x;
}

string alumnos::getcarrera() {
    return carrera;
}

int alumnos::getedad() {
    return edad;
}

void alumnos::inscribir(materia *m, int *c) {
    int i=0,j=0,n;

    for(i;i<100;i++){
        n=0;
        for (j ; j < 4; ++j) {
            if(m[i].getcodigo()[j] == c[j]){
                n++;
            }
            if(n==4){
                m[i].setalumnos(this);
            }
        }
    }
}

void alumnos::cargarnotas(materia *m, int *c, int n) {
    int i=0,j=0,z;

    for(i;i<100;i++){
        z=0;
        for (j ; j < 4; ++j) {
            if(m[i].getcodigo()[j] == c[j]){
                z++;
            }
            if(z==4){
                m[i].setnotas(n);//falta dni aca
            }
        }
    }
}