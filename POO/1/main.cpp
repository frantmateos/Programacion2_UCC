#include <iostream>
#include <math.h>

using namespace std;
#include "datos.h"

int main(){
    precio a(0);
    a.setbase(10);
    cout<<"precio base: " << a.getbase()<<endl;
    cout<<"aumento mayor: " << a.aumento1()<<endl;
    cout<<"aumento menor: " << a.aumento2()<<endl;
}