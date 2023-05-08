#include <iostream>
#include <string>
using namespace std;

#include "actores.h"
#include "datos.h"
void actores::setedad(int x) {
    edad = x;
}


void actores::setsexo(string x) {
    sexo =x;
}

string actores::getsexo() {
    return sexo;
}

int actores::getedad() {
    return edad;
}

void actores::alta() {
    datos::alta();
    int dni;
    string sexo;

    cout<<"ingrese el sexo:";
    cin>>sexo;
    setsexo(sexo);
    cout<<"Ingrese la edad: ";
    cin>>edad;
    setedad(edad);
}

void actores::imprimir() {
    datos::imprimir();
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Edad: "<<edad<<endl;
}