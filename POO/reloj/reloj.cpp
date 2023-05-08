#include <iostream>
using namespace std;

# include "reloj.h"

void Reloj::operator++() {
    sec++;
    if(sec>=60){
        min++;
        sec=0;
    }
    if (min>=60){
        hora++;
        min=0;
    }
    if (hora>=24){
        hora=0;
    }
}


void Reloj::mostrar() {

    cout<<hora<<":"<<min<<":"<<sec<<endl;
}

void Reloj::alarma() {
    if(hora==alarmahora && min==alarmamin && sec==alarmasec){
        for(int i =0;i<60;i++){
            cout<<"Alarma"<<endl;
        }
        min+=1;

    }
}

