#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;


bool operacion(int x){
    int i=0, factor = 2;

    while(i < 2 && x >1){
        if(x % factor == 0){
            i++;
            x /=factor;

        }else{
            factor++;
        }
    }


}

int main(){
    int x;

    cout<< "Ingrese un numero x: ";
    cin>>x;



}