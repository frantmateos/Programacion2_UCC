#include <iostream>
#include <string>
#include "datos.h"
using namespace std;

void datos::setnombre(string x) {
    nombre =x;
}
void datos::setclasificaion(string x) {
    clasificacion =x;
}

string datos::getnombre() {
    return nombre
}

string datos::getclsificacion() {
    return clasificacion;
}

void datos::alta() {
    string nombre,clasi;

    cout<<'--- cargar Datos ---'<<endl;
    cout<<"ingrese el nombre: ";
    cin>>nombre;
    setnombre(nombre);
    cout<<"ingrese el sexo:";
    cin>>clasi;
    setclasificaion(clasi);

}

void datos::imprimir() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Clasificacion: "<<clasificacion<<endl;
}