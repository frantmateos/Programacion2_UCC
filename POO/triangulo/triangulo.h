//
// Created by frant on 30/3/2023.
//

#ifndef TRIANGULO__TRIANGULO_H
#define TRIANGULO__TRIANGULO_H
class triangulo{
private:
    int B;
    int h;
    int s;
public:
    triangulo(int base, int h){
       /* B=base;
        h=h;*/
    }
    void setB(int base);
    void seth(int altura);
    void sets(int x);

    int getB();
    int geth();
    int gets();

    //triangulo();

    float perimetro();
    float superficie();
};
#endif //TRIANGULO__TRIANGULO_H
