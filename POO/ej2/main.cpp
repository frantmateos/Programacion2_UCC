#include <iostream>
using namespace std;
#include "datos.h"

int main() {
  int promedio;

  alumno a(0, 'f',0,0,0);
  a.setclave(89726);
  a.setnombre('fran mateos');
  a.setn1(8);
  a.setn2(6);
  a.setn3(10);

  promedio = a.promedio();
  cout<<"Clave: "<< a.getclave()<<endl;
  cout<<"Nombre: "<< a.getnombre()<<endl;
  cout<<"proemdio: "<< promedio<<endl;
  if(promedio>=4){
      cout<<"El alumno aprobo. "<<endl;
  }else{
      cout<<"El alumno no aprobo. "<<endl;
  }
}
