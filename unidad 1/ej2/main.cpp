#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;
int main() {
    int x,y,d,i,contador=0;

    cout<<"Ingrese x: ";
    cin>>x;
    cout<<"ingrese y: ";
    cin>>y;
    cout<<"Ingrese d: ";
    cin>>d;

    for(i=x;i<y;i++){
        if(i%d==0){
            contador++;
        }
    }

    cout<<"cantidad: "<<contador<<endl;

}
