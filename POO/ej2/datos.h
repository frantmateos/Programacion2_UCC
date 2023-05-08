//
// Created by frant on 13/4/2023.
//

#ifndef EJ2_DATOS_H
#define EJ2_DATOS_H
class alumno{
private:
    int c;
    char nom;
    int nota1;
    int nota2;
    int nota3;
public:
    alumno(int clave, char nombre, int n1, int n2, int n3){}
    void setclave(int clave);
    void setnombre(char nombre);
    void setn1(int n1);
    void setn2(int n2);
    void setn3(int n3);


    int getclave();
    char getnombre();
    int getn1();
    int getn2();
    int getn3();

    float promedio ();
};
#endif //EJ2_DATOS_H
