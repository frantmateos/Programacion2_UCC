#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;

int operacion(int x, int y){
    int b = x;
    x=y;
    y=b;
    cout<<"orden cambiado: "<<endl;
    cout<<"X: "<<x;
    cout<<"Y: "<<y;



}


int main(){
     int x,y;

     cout<<"Ingrese los valores de x e y: ";
     cin >> x >>y;

    operacion(x,y);
 }