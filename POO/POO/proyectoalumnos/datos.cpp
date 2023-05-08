# include "datos.h"
#include <iostream>
#include <string>
using namespace std;
personas::personas(int num,string nom,string ape, string em) {
    dni = num;
    nombre = nom;
    apellido = ape;
    email = em;
}
// acordarse en esta parte del  ~

void personas::setdni(int x) {
    dni = x;
}
void personas::setnombre(string x) {
    nombre = x;
}
void personas::setapellido(string x) {
    apellido = x;
}
void personas::setemail(string x) {
    email = x;
}

int personas::getdni() {
    return dni;
}
string personas::getnombre() {
    return nombre;
}
string personas::getapellido(){
    return apellido;
}
string personas::getemail() {
    return email;
}
void personas::imprimir() {
    cout<<"Dni: "<<dni<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"email: "<<email<<endl;

}
