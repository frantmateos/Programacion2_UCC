#include <iostream>
#include <math.h>

using namespace std;
#include "datos.h"

void alumno::setclave(int clave) {
    c = clave;
}

void alumno::setnombre(char nombre) {
    nom = nombre;
}
void alumno::setn1(int n1) {
    nota1 = n1;
}
void alumno::setn2(int n2) {
    nota2 = n2;
}
void alumno::setn3(int n3) {
    nota3 = n3;
}


int alumno::getclave() {
    return c;
}
char alumno::getnombre() {
    return nom;
}

int alumno::getn1() {
    return nota1;
}

int alumno::getn2() {
    return nota2;
}

int alumno::getn3() {
    return nota3;
}

float alumno::promedio() {
    return (nota1+nota2+nota3)/3;
}

