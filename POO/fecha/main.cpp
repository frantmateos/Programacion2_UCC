#include <iostream>
#include "fecha.h"
using namespace std;
int main() {
    fecha hoy(0,0,0);
    int x;

    cout<<"INGRESE LA FECHA DE HOY: "<<endl;
    cout<<"Ingrese el dia: ";
    cin>>x;
    hoy.setdia(x);
    cout<<"Ingrese el mes: ";
    cin>>x;
    hoy.setmes(x);
    cout<<"Ingrese el anio: ";
    cin>>x;
    hoy.setanio(x);


}
