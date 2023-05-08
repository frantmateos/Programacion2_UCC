#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "materia.h"
#include "todasmaterias.h"

void todaslasmaterias::agregarmaterias() {
    todaslasmati[contador] = new materia;
    todaslasmati[contador]->crear();
    contador++;
}

void todaslasmaterias::mostrarmaterias() {
    cout<<"--Todos las materias--"<<endl;
    if(contador == 0){
        cout<<"Todavia no hay alumnos."<<endl;
    }else{
        for( int  i =0;i<contador;i++){
            cout<<"materia["<<i<<"]"<<endl;
            todaslasmati[i]->mostrar();
            cout<<""<<endl;
        }
    }
}

materia* todaslasmaterias::buscarmateria(int x) {
    if(contador == 0){
        cout<<"Todavia no hay materias cargadas.";
        return 0;
    }else{
        for(int i = 0;i<contador;i++){
            if(todaslasmati[i]->getcodigo() == x){
                return todaslasmati[i];
                break;
            }
        } return 0;
    }
}

