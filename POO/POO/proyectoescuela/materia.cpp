#include "materia.h"
#include <iostream>
#include <string>
using namespace std;
#include "alumnos.h"
#include "datos.h"

void materia::setnombre(string x) {
    nombre = x;
}
void materia::setcodigo(int x) {
    codigo = x;
}

void materia::setalumnos(alumnos *a) {
    alumno[cantidad] = a->getnombre();
    apellidos[cantidad] = a->getapellido();
    cantidad++;
}
void materia::setdocente(string nombre) {
    docente = nombre;
    valor++;
}
int materia::getcodigo() {
    return codigo;
}
void materia::setnota(alumnos *a, int num) {
    //alumno[cantidad] = a->getnombre();
    for(int i = 0;i<cantidad;i++){
        nota[i][cantnotas] = num;
        cantnotas++;
    }
    /*nota[cantidad][cantnotas] = num;
    cantnotas++;*/
}

void materia::mostrarnotas() {
    cout<<"-- Notas de los alumnos en la materia -- "<<endl;
    if(nota[0][0]!=0){
        for(int i = 0;i<cantidad;i++){
            cout<<"ALumno: "<<alumno[i]<<endl;
            for(int j = 0;j<cantnotas;j++){
                cout<<"Nota: "<<nota[i][j]<<endl;
            }
        }
    }
}

void materia::crear() {
    string nombre;
    int nota, codigo;
    cout<<"Ingrese el nombre de la materia: ";
    cin>>nombre;
    setnombre(nombre);
    cout<<"Ingrese el codigo de la materia: ";
    cin>>codigo;
    setcodigo(codigo);
}

void materia::mostrar() {
    cout<<"----------------------"<<endl;
    cout<<"Materia: "<<nombre<<endl;
    cout<<"Codigo: "<<codigo<<endl;
    if(valor>0){
        cout<<"Docente titular: "<<docente<<endl;
    }else{
        cout<<"Todavia no hay un docente acargo de la catedra. "<<endl;
    }
    if(cantidad>0){
        for(int i = 0;i<cantidad;i++){
            cout<<"Alumno: "<<alumno[i]<<" "<<apellidos[i]<<endl;
        }
    }

}

