
#ifndef FECHA_FECHA_H
#define FECHA_FECHA_H
class fecha {
    int dia;
    int mes;
    int anio;


public:
    fecha(int _dia, int _mes, int _anio){
        dia = _dia;
        mes = _mes;
        anio = _anio;
    }

    void setdia(int x){
        dia = x;
    }
    void setmes(int x){
        mes = x;
    }
    void setanio(int x){
        anio =x;
    }

    void operator++();
    void operator--();
    void mostrar();
};
#endif //FECHA_FECHA_H
