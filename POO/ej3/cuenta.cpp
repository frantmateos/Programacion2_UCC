
using namespace std;
#include "datos.h"
cuenta::cuenta(double cantidad, std::string nombre) {\
    nom = nombre;
    cant = cantidad;
}

void cuenta::setnombre(std::string nombre) {
    nom = nombre;
}
void cuenta::setcantidad(double cantidad) {
    cant = cantidad;
}

string cuenta::getnombre() {
    return nom;
}

double cuenta::getcantidad() {
    return cant;
}

void cuenta::ingresar(double ingreso) {
    cant += ingreso;
}

void cuenta::retirar(double egreso){
    cant -= egreso;
    if(cant<0){
        cant =0;
    }
}