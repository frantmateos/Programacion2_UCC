
#ifndef PROYECTOESCUELA_TODOSLOSDOCENTES_H
#define PROYECTOESCUELA_TODOSLOSDOCENTES_H
#include <iostream>
#include <string>
using namespace std;
#include "datos.h"
#include "docente.h"

class todoslosdocentes{
private:
    int contador =0;
    docente* todosdoci[100];
public:
    todoslosdocentes() =default;

    void agregardocente ();
    void mostrardocentes();
    docente* buscardocente(int x);

};
#endif //PROYECTOESCUELA_TODOSLOSDOCENTES_H
