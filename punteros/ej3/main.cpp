
#include<iostream>
using namespace std;

int main() {
    float x, y;
    int v[5],i,*p;

    for(i=0;i<5;i++){
        cout<<"Ingrese un valor para la posicion "<< i << ": ";
        cin>> v[i];
    }
    for(i=0;i<5;i++){
        p = &v[i];
        cout<< p <<endl;


    }


    /*p = &x;
    cout<<"Ingrese valor de x: "<<endl;
    cin>>*p;

    cout<<"Direccion que guarda p: "<<p<<endl;
    cout<<"X: "<<*p<<endl;

    p = &y;
    cout<<"Ingrese valor de y: "<<endl;
    cin>>*p;

    cout<<"Direccion que guarda p: "<<p<<endl;
    cout<<"Y: "<<*p<<endl;
*/
}























