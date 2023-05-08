#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int permutacion(int vector[],int x,int n,int dato){
    int resultado = 0,contador=0,i,v;
    bool valor = true;

    for(i=0;i<n;i++){
        v = vector[i];
        if(v == dato){
            contador++;
            cout<<"contador 1: "<<contador<<endl;
            if(contador ==2){
                valor = false;
                cout<<"DDDDDD";
                break;
            }
        }
        contador =0;
        cout<<"contador 2: "<<contador<<endl;

    }
    contador =0;
    cout<<"contador 2: "<<contador<<endl;

    cout<<""<<endl;
    return valor;
}


int main(){
    int vector[100],n,i,x;
    bool final;
    cout<<"Ingrese el tamanio del vector: ";
    cin>>n;

    for(i=0;i<=n;i++){
        cout<<"["<<i<<"]";
        cin>>vector[i];
        cout<<""<<endl;
    }
    for(i=0;i<=n;i++){
        final = permutacion(vector,x,n,i);
    }
    if (final){
        cout<<" es permutacion.";
    }else{
        cout<<"no es permutacion";
    }

}
