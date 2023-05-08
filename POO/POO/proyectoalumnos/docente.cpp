#include <iostream>
#include <string>
using namespace std;

#include "datos.h"
#include "materia.h"
#include "alumnos.h"
#include "docente.h"

docente::docente(int dni, string nombre, string apellido, string email, string tit):personas(dni,nombre,apellido,email) {
    titulo = tit;
}

void docente::settitulo(string x) {
    titulo = x;
}

string docente::gettitulo() {
    return titulo;
}

void docente::inscribir(materia *m, int *c) {
    int i=0,j=0,n;
    
    for(i;i<100;i++){
        n=0;
        for (j ; j < 4; ++j) {
            if(m[i].getcodigo()[j] == c[j]){
                n++;
            }
            if(n==4){
                m[i].setdocente(this);
            }
        }
    }
}
