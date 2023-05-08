#include <iostream>
#include "reloj.h"
using namespace std;
#include <ctime>

int main() {
    Reloj hoy(0,0,0);
    int x;

    cout<<"Cargar la hora: "<<endl;
    cout<<"Hora: ";
    cin>>x;
    hoy.sethora(x);
    cout<<"Minutos: ";
    cin>>x;
    hoy.setmin(x);
    cout<<"Sec: ";
    cin>>x;
    hoy.setsec(x);

    cout<<"Cargar la alarma: "<<endl;
    cout<<"Hora: ";
    cin>>x;
    hoy.setahora(x);
    cout<<"Minutos: ";
    cin>>x;
    hoy.setamin(x);
    cout<<"Sec: ";
    cin>>x;
    hoy.setaseg(x);

    while (true){
        hoy.operator++();
        hoy.mostrar();
        hoy.alarma();
    }



}
