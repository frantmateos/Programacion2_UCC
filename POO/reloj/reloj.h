//
// Created by frant on 20/4/2023.
//


#ifndef RELOJ_RELOJ_H
#define RELOJ_RELOJ_H
class Reloj {
    int hora;
    int min;
    int sec;
    int alarmahora;
    int alarmamin;
    int alarmasec;
public:
    Reloj();
    Reloj(int _hora, int _min, int _sec){
        hora = _hora;
        min = _min;
        sec = _sec;
    }

    void sethora(int _hora){
        hora = _hora;
    }
    void setmin(int _min){
        min = _min;
    };
    void setsec(int _sec){
        sec = _sec;
    };
    void setahora(int x){
        alarmahora = x;
    }
    void setamin(int x){
        alarmamin = x;
    }
    void setaseg(int x){
        alarmasec = x;
    }

    int gethora(){
        return hora;
    }
    int getmin(){
        return min;
    }
    int getsec(){
        return sec;
    }

    void operator++();
    void mostrar();
    void alarma();
};
#endif //RELOJ_RELOJ_H
