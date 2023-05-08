#include <iostream>
using namespace std;

# include "fecha.h"

void fecha::operator++() {
    dia++;
    if(dia>=30){
        mes++;
        dia=1;
    }
    if(mes>=12){
        anio++;
        mes=1;
    }

}

void fecha::mostrar() {
    cout<<dia<<"/"<<mes<<"/"<<anio;
}
void fecha::operator--() {
    dia--;
    if(dia<=1){
        mes--;
        dia=30;
    }
    if(mes<=1){
        anio--;
        mes=12;
    }

}