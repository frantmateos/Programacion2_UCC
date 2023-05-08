#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;

int operacion(int n, int m){
    int a,b;

    for(int i=0;i<=n;i++){
        cout<<"jj"<<endl;
        if(n%i == 0 && i!=n && i!=1){
            cout<<i<<" kk"<<endl;
        }
    }
}


int main() {
    int x,y;

    cout<<"Ingrese x: ";
    cin>>x;
    cout<<"ingrese y: ";
    cin>>y;

    operacion(x,y);

}
