#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "alumnos.h"
#include "todoslosalumnos.h"

void todoslosalumnos::agregaralumnos() {
    todosalumni[contador] = new alumnos;
    todosalumni[contador]->alta();
    contador++;
}

void todoslosalumnos::mostraralumnos() {
    cout<<"--Todos los alumnos--"<<endl;
    if(contador == 0){
        cout<<"Todavia no hay docentes."<<endl;
    }else{
        for( int  i =0;i<contador;i++){
            cout<<"Docente["<<i<<"]"<<endl;
            todosalumni[i]->imprimir();
            cout<<""<<endl;
        }
    }
}

alumnos* todoslosalumnos::buscaralumnos(int x) {
    if(contador == 0){
        cout<<"Todavia no hay alumnos cargados.";
        return 0;
    }else{
        for(int i = 0;i<contador;i++){
            if(todosalumni[i]->getdni() == x){
                return todosalumni[i];
                break;
            }
        } return 0;
    }
}