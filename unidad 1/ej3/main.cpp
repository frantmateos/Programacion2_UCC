#include <iostream>
using namespace std;

int operacion(int num1, int num2) {
    if (num2 == 0) {
        return num1;

    } else {

        return operacion(num2, num1%num2);
    }
}

int main() {
    int num1, num2;
    cout << "introduzca dos nuemros: " << endl;
    cin >> num1 >> num2;
    int x = operacion(num1, num2);
    cout << "MCD: " <<x << endl;
    
}