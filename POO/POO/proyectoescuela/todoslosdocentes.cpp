#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "docente.h"
#include "todoslosdocentes.h"

void todoslosdocentes::agregardocente() {
    todosdoci[contador] = new docente;
    todosdoci[contador]->alta();
    contador++;
}

void todoslosdocentes::mostrardocentes() {
    cout<<"--Todos los docenetes--"<<endl;
    if(contador == 0){
        cout<<"Todavia no hay docentes."<<endl;
    }else{
        for( int  i =0;i<contador;i++){
            cout<<"Docente["<<i<<"]"<<endl;
            todosdoci[i]->imprimir();
            cout<<""<<endl;
        }
    }
}

docente* todoslosdocentes::buscardocente(int x) {
    if(contador == 0){
        cout<<"Todavia no hay docentes cargados.";
        return 0;
    }else{
        for(int i = 0;i<contador;i++){
            if(todosdoci[i]->getdni() == x){
                return todosdoci[i];
                break;
            }
        } return 0;
    }
}