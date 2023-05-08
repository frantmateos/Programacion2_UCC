#include <iostream>
using namespace std;

int operacion(int num){
    int x = num, num1;
    while(num>1){
        num--;
        cout<< "num: "<< num<< endl;
        num1 = num;
        x= x*num1;
        cout<< "x*num1: "<< x<<endl;
    }
    cout<< x;
}



int main() {
    int num;
    cout <<" ingrese el numero: ";
    cin >>num;

    operacion(num);

    return 0;
}
