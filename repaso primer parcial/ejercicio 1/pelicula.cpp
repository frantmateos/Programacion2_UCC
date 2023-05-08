#include <iostream>
#include <string>
using namespace std;

#include "pelicula.h"
#include "actores.h"

void pelicula::setduracion(int x) {
    duracion = x;
}

void pelicula::setcategoria(string x) {
    categoria = x;
}

string pelicula::getcategoria() {
    return categoria;
}

int pelicula::getduracion() {
    return duracion;
}

void pelicula::alta() {
    datos::alta();
    int duracion;
    string cate;
    cout<<"Ingrese la categoria: ";
    cin>>cate;
    setcategoria(cate);
    cout<<"ingrese la duracion: ";
    cin>>duracion;
    setduracion(duracion);
}

void pelicula::imprimir() {{
    datos::imprimir();
    cout<<"Duracion: "<<duracion<<endl;
    cout<<"Categoria: "<<categoria<<endl;
}}