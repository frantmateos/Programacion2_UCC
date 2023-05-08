#include <iostream>
#include <string>
using namespace std;

#include "materia.h"
#include "docente.h"
#include "alumnos.h"
#include "datos.h"

materia::materia(int *cod, string nom) {

}



void materia::setdocente(docente *x) {
    d = x;
}
void materia::setalumnos(alumnos *x) {
    a=x;
}

alumnos* materia::getalumnos() {
    return a;
}
docente* materia::getdocente() {
    return d;
}
int* materia::getcodigo() {
    return codigo;
}
string materia::getnombre() {
    return nombre;
}