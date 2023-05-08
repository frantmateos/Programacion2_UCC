#include <math.h>
#include <iostream>
using namespace std;
#include "datos.h"


void precio::setbase(int b) {
    base = b;
}

int precio::getbase() {
    return base;
}

float precio::aumento1(){
    return base*1.3;
}

float precio::aumento2(){
    return base*1.15;
}