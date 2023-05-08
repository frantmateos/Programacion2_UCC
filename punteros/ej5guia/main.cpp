#include<iostream>
using namespace std;


void mayuscula(char* v){
    int i;
    for(i=0;i<5;i++) {
        if(v[i] >= 97 && v[i] <= 122){
            v[i]-=32;

        }
    }
}

int main() {
    int i,*p,j;
    char v[10],*x;

    for(i=0;i<5;i++){
        cout<<"Ingrese un valor para la posicion "<< i << ": ";
        cin>> v[i];
    }

    /*for(i=0;i<5;i++) {
        if(v[i] >= 97 && v[i] <= 122){
            v[i]-=32;

        }
    }*/
    mayuscula(v);
    cout<<v;

}



