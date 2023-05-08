#include <iostream>
using namespace std;

int main(){
    int x, *p;
    p = &x;
    *p = 5;

    cout<< *p;
}