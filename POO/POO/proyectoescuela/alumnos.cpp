#include "datos.h"
#include <iostream>
#include <string>
using namespace std;

# include "alumnos.h"


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

void alumnos::alta() {
    personas::alta();
    int edad;
    string carrera;
    cout<<"Ingrese la edad: ";
    cin>>edad;
    setedad(edad);
    cout<<"Ingrese la carrera: ";
    cin>>carrera;
    setcarrera(carrera);
}

void alumnos::imprimir() {
    personas::imprimir();
    cout<<"Edad: "<<edad<<endl;
    cout<<"Carrera: "<<carrera<<endl;
}