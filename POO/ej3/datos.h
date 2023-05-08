//
// Created by frant on 13/4/2023.
//
#include <string>
#ifndef EJ3_DATOS_H
#define EJ3_DATOS_H
class cuenta{
private:
    std::string nom;
    double cant =0;
public:
    cuenta(std::string nombre);
    cuenta(double cantidad, std::string nombre);
    void setnombre(std::string nombre);
    void setcantidad(double cantidad);

    std:: string getnombre();
    double getcantidad();

    void ingresar( double ingreso);
    void retirar( double egreso

    );


};
#endif //EJ3_DATOS_H
