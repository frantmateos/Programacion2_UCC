#include "datos.h"
#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

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

void personas::alta() {
    int dni;
    string nombre,apellido,email;

    cout<<'--- cargar Datos ---'<<endl;
    cout<<"ingrese el nombre: ";
    cin>>nombre;
    setnombre(nombre);
    cout<<"ingrese el apellido:";
    cin>>apellido;
    setapellido(apellido);
    cout<<"ingrese el dni: ";
    cin>>dni;
    setdni(dni);
    cout <<"ingrese su email:";
    cin>>email;
    setemail(email);


}
