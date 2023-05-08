//
// Created by frant on 27/4/2023.
//
#include <iostream>
#include <string>
using namespace std;

#ifndef VEHICULO__VEHICULO_H
#define VEHICULO__VEHICULO_H
class vehiculo{
private:
    string color;
    int cant_personas;
public:
    vehiculo(){};

    void setcolor(string x);
    void setcanti(int x);

    string getcolor();
    int getcant();
    virtual void imprimir();

};

class motor:public vehiculo{
private:
    int conmotor;
    int cantruedas;
public:

    motor(){};
    void imprimir();
};
#endif //VEHICULO__VEHICULO_H
