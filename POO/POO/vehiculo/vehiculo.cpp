#include <iostream>
#include <string>
using namespace std;

#include "vehiculo.h"


void vehiculo::setcolor(string x)  {
    color = x;
}

void vehiculo::setcanti(int x) {
    cant_personas = x;
}

string vehiculo::getcolor() {
    return color;
}
int vehiculo::getcant() {
    return cant_personas;
}

void vehiculo::imprimir() {
    cout<<"color: "<< color<<endl;
    cout<<"Cantidad de personas: "<< cant_personas<<endl;
}

void motor::imprimir() {
    vehiculo::imprimir();
    cout<<"Motor: "<<conmotor<<endl;
    cout<<"Cant ruedas: "<<cantruedas<<endl;
}
