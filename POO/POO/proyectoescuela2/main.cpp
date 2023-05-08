#include "datos.h"
#include "docente.h"
#include "alumnos.h"
#include "todoslosdocentes.h"
#include "todoslosalumnos.h"
#include "materia.h"
#include "todasmaterias.h"
#include <iostream>
#include <string>

using namespace std;
int main() {
    todoslosdocentes doci;
    todoslosalumnos alumni;
    todaslasmaterias mati;
    int dni,opcion = 0,edad;
    string nombre,apellido,titulo,email,carrera;

    while(opcion != 6){
        cout<<"Bienvenido!!"<<endl;
        cout<<"1- cargar datos de docentes y alumnos"<<endl;
        cout<<"2- Inscribir docente a materia"<<endl;
        cout<<"3- Inscribir alumno a materia"<<endl;
        cout<<"4- cargar notas de los alumnos"<<endl;
        cout<<"5- Modificar datos"<<endl;
        cout<<"6- Salir"<<endl;
        cout<<"Ingrese su opcion: ";
        cin>>opcion;

        if(opcion == 1){
            int op;
            cout<<"1 - para cargar un docente"<<endl;
            cout<<"2 - para cargar un alumno"<<endl;
            cout<<"3 - para cargar una materia"<<endl;
            cin>>op;

            if(op == 1){
                doci.agregardocente();
                doci.mostrardocentes();

            }else if(op ==2 ) {
                alumni.agregaralumnos();
                alumni.mostraralumnos();
            }else if(op == 3){
                mati.agregarmaterias();
                mati.mostrarmaterias();
            }

        }else if(opcion ==2){
            cout<<"--Anotar docente a materia--"<<endl;
            int dni,codigo;
            cout<<"Ingrese el dni del docente que desea agregar: ";
            cin>>dni;
            cout<<"Ingrese el codigo de la materia que esta buscando: ";
            cin>>codigo;
            docente* agregar;
            agregar = doci.buscardocente(dni);
            materia* buscada;
            buscada = mati.buscarmateria(codigo);
            string nom;
            nom = agregar->getnombre();
            //buscada->getcodigo()).agregaralumno(agregar);
            buscada->setdocente(nom);
            buscada->mostrar();
        }else if (opcion == 3) {
            cout<<"--Anotar alumno a materia--"<<endl;
            int dni,codigo;
            cout<<"Ingrese el dni del alumno que desea agregar: ";
            cin>>dni;
            cout<<"Ingrese el codigo de la materia que esta buscando: ";
            cin>>codigo;
            alumnos* agregar;
            agregar = alumni.buscaralumnos(dni);
            materia* buscada;
            buscada = mati.buscarmateria(codigo);
            string nom;
            nom = agregar->getnombre();
            //buscada->getcodigo()).agregaralumno(agregar);
            //buscada->setalumnos(nom);
            agregar->setmateria(buscada);
            agregar->imprimir();
            //buscada->setalumnos(agregar);
            //buscada->mostrar();
            //buscada->mostrarcompleta();



        }else if(opcion == 4){
            cout<<"--Cargar notas--"<<endl;
            int dni,codigo,elegir=1;
            //cout<<"1- para cargar notas: "<<endl;
            /*cout<<"2- para mostrar las notas que hay: "<<endl;
            cin>>elegir;*/
            if(elegir==1){
                cout<<"Ingrese el dni del alumno: ";
                cin>>dni;
                cout<<"Ingrese el codigo de la materia que esta buscando: ";
                cin>>codigo;
                alumnos* agregar;
                agregar = alumni.buscaralumnos(dni);
                materia* buscada;
                buscada = mati.buscarmateria(codigo);
                int nota;
                cout<<"Ingrese la nota que desea agregar: ";
                cin>> nota;
                /*buscada->setnotas(agregar->getdni(),nota);
                buscada->getnotas(agregar->getdni());*/
                buscada->setnota(agregar,nota);
                //buscada->getnotas();
                buscada->mostrarnotas();
            }


        }else if(opcion == 5){
                int pi;
                docente* buscado = 0;
                alumnos* buscadoo = 0;
                cout<<"1 - modificar datos de un docente"<<endl;
                cout<<"2 - modificar datos de un alumno"<<endl;
                cin>>pi;
                if(pi == 1){
                    do{
                        int dni,modi;
                        cout<<"Ingres el dni del alumno que esta buscando o 0 para salir: ";
                        cin>>dni;
                        if(dni == 0){
                            break;
                        }
                        buscado = doci.buscardocente(dni);
                        if(buscado == 0 ){
                            cout<<"No hay usuarios con ese dni."<<endl;
                        }else{
                            buscado->imprimir();
                            cout<<"--Selecciones la opcion que desea modificar--"<<endl;
                            cout<<"1-nombre: "<<endl;
                            cout<<"2-apellido: "<<endl;
                            cout<<"3-dni: "<<endl;
                            cout<<"4-email: "<<endl;
                            cout<<"5-titulo: "<<endl;
                            cin>>modi;

                            switch (modi) {
                                case 1:
                                    cout<<"nuevo nombre: ";
                                    cin>>nombre;
                                    buscado->setnombre(nombre);
                                    buscado->imprimir();
                                    break;
                                case 2:
                                    cout<<"nuevo apellido: ";
                                    cin>>apellido;
                                    buscado->setapellido(apellido);
                                    buscado->imprimir();
                                    break;
                                case 3:
                                    cout<<"nuevo dni: ";
                                    cin>>dni;
                                    buscado->setdni(dni);
                                    buscado->imprimir();
                                    break;
                                case 4:
                                    cout<<"nuevo email: ";
                                    cin>>email;
                                    buscado->setemail(email);
                                    buscado->imprimir();
                                    break;
                                case 5:
                                    cout<<"nuevo titulo: ";
                                    cin>>titulo;
                                    buscado->settitulo(titulo);
                                    buscado->imprimir();
                                    break;
                            }
                        }

                    }while (buscado = 0);
                }else if(pi == 2){
                    do{
                        int dni,modi;
                        cout<<"Ingres el dni del alumno que esta buscando o 0 para salir: ";
                        cin>>dni;
                        if(dni == 0){
                            break;
                        }
                        buscadoo = alumni.buscaralumnos(dni);
                        if(buscadoo == 0 ){
                            cout<<"No hay usuarios con ese dni."<<endl;
                        }else{
                            buscadoo->imprimir();
                            cout<<"--Selecciones la opcion que desea modificar--"<<endl;
                            cout<<"1-nombre: "<<endl;
                            cout<<"2-apellido: "<<endl;
                            cout<<"3-dni: "<<endl;
                            cout<<"4-email: "<<endl;
                            cout<<"5-carrera: "<<endl;
                            cout<<"6-edad: "<<endl;
                            cin>>modi;

                            switch (modi) {
                                case 1:
                                    cout<<"nuevo nombre: ";
                                    cin>>nombre;
                                    buscadoo->setnombre(nombre);
                                    buscadoo->imprimir();
                                    break;
                                case 2:
                                    cout<<"nuevo apellido: ";
                                    cin>>apellido;
                                    buscadoo->setapellido(apellido);
                                    buscadoo->imprimir();
                                    break;
                                case 3:
                                    cout<<"nuevo dni: ";
                                    cin>>dni;
                                    buscadoo->setdni(dni);
                                    buscadoo->imprimir();
                                    break;
                                case 4:
                                    cout<<"nuevo email: ";
                                    cin>>email;
                                    buscadoo->setemail(email);
                                    buscadoo->imprimir();
                                    break;
                                case 5:
                                    cout<<"nueva carrera: ";
                                    cin>>carrera;
                                    buscadoo->setcarrera(carrera);
                                    buscadoo->imprimir();
                                    break;
                                case 6:
                                    cout<<"nueva edad: ";
                                    cin>>edad;
                                    buscadoo->setedad(edad);
                                    buscadoo->imprimir();
                                    break;

                            }
                        }

                    }while (buscadoo = 0);
                    }

            }else{
            cout<<"Adios.";
            break;
        }



    }


}
