#include "datos.h"
#include <iostream>
#include <string>
using namespace std;

# include "docente.h"



void docente::settitulo(string x) {
    titulo = x;
}

string docente::gettitulo() {
    return titulo;
}

void docente::alta() {
    personas::alta();
    string titulo;
    cout<<"Ingrese La titulo: ";
    cin>>titulo;
    settitulo(titulo);
}
void docente::imprimir() {
    personas::imprimir();
    cout<<"Titulo: "<<titulo<<endl;
}