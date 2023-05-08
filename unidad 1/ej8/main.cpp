#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int polinomio(int vector[],int x,int n){
    int resultado = 0,j=1,i,v;

    for(i=0;i<n;i++){
        v = vector[i];
        resultado =resultado + v*pow(n,i);
        //resultado = resultado + v*x^n;
        //cout<<v<<"*"<<x<<"^"<<n<<"   ";
        //n--;

        cout<<"res: "<<resultado<<endl;


    }
    cout<<""<<endl;
    return resultado;
}


int main(){
    int vector[100],n,i,x;

    cout<<"Ingrese el tamanio del vector: ";
    cin>>n;

    for(i=0;i<=n;i++){
        cout<<"["<<i<<"]";
        cin>>vector[i];
        cout<<""<<endl;
    }

    cout<<"Ingrese el valor de x: ";
    cin>>x;
    cout<<polinomio(vector,x,n);

}
