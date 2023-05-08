#include "datos.h"
#include "materia.h"
#include "docente.h"
#include "alumnos.h"
#include <iostream>
#include <string>
using namespace std;
materia* m;
alumnos* a;
docente* d;



int main() {

    int dni,opcion = 0;
    string nombre,apellido,titulo,email;
    cout<<"Bienvenido!!"<<endl;
    cout<<"1- cargar datos de docentes y alumnos"<<endl;
    cout<<"2- Inscribir alumnos a materias"<<endl;
    cout<<"3- Anotar titulo"<<endl;
    cout<<"4- cargar notas de los alumnos"<<endl;
    cout<<"5- Modificar datos"<<endl;
    cout<<"6- Salir"<<endl;
    cout<<"Ingrese su opcion: ";
    cin>>opcion;

    while(opcion != 6){
        cout<<"Bienvenido!!"<<endl;
        cout<<"1- cargar datos de docentes y alumnos"<<endl;
        cout<<"2- Inscribir alumnos a materias"<<endl;
        cout<<"3- Anotar titulo"<<endl;
        cout<<"4- cargar notas de los alumnos"<<endl;
        cout<<"5- Modificar datos"<<endl;
        cout<<"6- Salir"<<endl;
        cout<<"Ingrese su opcion: ";
        cin>>opcion;

        if(opcion == 1){
            int op;
           cout<<"marque 1 para cargar un docente o  2 para un alumnos";
           cin>>op;

           if(op == 1){
               cout<<'--- cargar docente ---'<<endl;
               cout<<"ingrese el nombre: ";
               cin>>nombre;
               cout<<"ingrese el apellido:";
               cin>>apellido;
               cout<<"ingrese el dni: ";
               cin>>dni;
               cout <<"ingrese su email:";
               cin>>email;
               cout<<"Ingrese su titulo:";
               cin>>titulo;

               d = new docente(dni,nombre,apellido,email,titulo);

            }
        }


    }


}
