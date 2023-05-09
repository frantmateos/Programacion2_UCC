#include <iostream>
#include <string>
using namespace std;
//holaaa
#include "actores.h"
#include "datos.h"
#include "pelicula.h"

int main(){
    actores* actor;
    pelicula* peli;

    int opcion = 0;

    while(opcion !=3){
        cout<<"Bienvenido!!"<<endl;
        cout<<"1- cargar datos de actores y peliculas"<<endl;
        cout<<"2- Inscribir docente a materia"<<endl;
        cout<<"3- Salir"<<endl;
        cin>>opcion;

        if(opcion == 1){
            int op = 0;
            while(op != 3){
                cout<<"1- cargar actor"<<endl;
                cout<<"2- Cargar pelicula"<<endl;
                cout<<"3- Salir"<<endl;
                cin>>op;

                if (op = 1){
                    actor->alta();
                    actor->imprimir();
                }else if (op == 2){
                    peli->alta();
                    peli->imprimir();
                }else{
                    cout<<"Porfavor ingrese un valor valido."<<endl;
                    cin>>op;
                }
            }

        }else if(opcion ==2){
            actores actor_buscado;
            string busacado;
            string nuevodato;
            cout<<"Ingrese el nombre del actor buscado: ";
            cin>>busacado;
            for(int i =0;i< 100;i++){
                if(actor[i].getnombre() == busacado){
                    actor_buscado = actor[i];
                    cout<<"Cambiar la clasificaion del actor: "<<endl;
                    cout<<"Nueva clasificacion: ";
                    cin>>nuevodato;
                    actor->setclasificaion(nuevodato);
                    cout<<"Se cambio la clasificacion a: "<<actor->getclsificacion();
                }
            }


        }
    }

}