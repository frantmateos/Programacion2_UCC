#include <iostream>
using namespace std;
#include "datos.h"

int main() {
    string nombre;
    int cantidad,opcion;
    opcion = -1;
    cuenta *account;
    //cuenta a(0,"f");
    cout<<"================ Banco HSBC ================"<<endl;
    cout<<"Ingrese el nombre del titular: ";
    cin>>nombre;
    //a.setnombre(nombre);
    cout<<"ingrese la cantidad de dinero que tiene la cuenta: ";
    cin>>cantidad;
    account = new cuenta(cantidad,nombre);
    //a.setcantidad(cantidad);
    do{
        cout<<"============= Banco HSBC ============="<<endl;
        cout<<"=============    MENU    ============="<<endl;
        cout<<" 1- Ingresar dinero a la cuenta: "<<endl;
        cout<<" 2- Retirar dinero a la cuenta: "<<endl;
        cout<<" 3- Cambiar titular de la cuenta: "<<endl;
        cout<<" 4- Mostrar info de la cuenta: "<<endl;
        cout<<" 5- Cerrar sesion : "<<endl;
        cout<<" seleccione una opcion: "<<endl;
        cin>>opcion;

        if(opcion == 1){
            int ingreso;
            cout<<"Ingrese la cantidad de dinero que desea ingresar: ";
            cin>>ingreso;
            account->ingresar(ingreso);
            cout<<account->getcantidad()<<endl;



        }else  if(opcion == 2){
            int retirar;
            cout<<"ingrese la cantidad que desea retirar: ";
            cin>>retirar;

            if(cantidad>=retirar){
                account->retirar(retirar);
                cout<<"Se retir el diner y lo que queda en la cuenta es: "<<account->getcantidad();
            }
        }else if(opcion ==3){
            cout<<"Ingrese el nombre del nuevo titular:";
            cin>>nombre;
            account->setnombre(nombre);
            cout<<"Nuevo titular: "<<nombre<<endl;
        } else if(opcion ==4){
            cout<<"Titular: "<< account->getnombre()<<endl;
            cout<<"Monto: "<< account->getcantidad()<<endl;
        }
    } while (opcion!=5);



}
