#include <iostream>
using namespace std;
#include "triangulo.h"


int main() {
    int x;
    int perimetro;
    triangulo t(0,0);
    t.setB(7);
    t.seth(2);
    t.sets(3);
    perimetro = t.perimetro();
    cout<<"perimetro: "<< perimetro<<endl;
    cout<<"superficie:"<<t.superficie()<<endl;
    cout<<"kl: "<<t.gets();

}
