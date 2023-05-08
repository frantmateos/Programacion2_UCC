#include <iostream>
#include "vehiculo.h"
using namespace std;
int main() {

    vehiculo v;
    int x;
    string c;
    motor m;

    cout<<"Ingrese el color: ";
    cin>>c;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>x;
    v.setcanti(x);
    v.setcolor(c);

    v.imprimir();
    cout<<"Ingrese el color: ";
    cin>>c;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>x;
    m.setcanti(x);
    m.setcolor(c);
    m.imprimir();

}
