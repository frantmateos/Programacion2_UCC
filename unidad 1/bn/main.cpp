#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int TAMANIO = 10;
const char BARCO = 'B';
const char AGUA = ' ';

void inicializarTablero(char tablero[][TAMANIO]) {
    for (int i = 0; i < TAMANIO; i++) {
        for (int j = 0; j < TAMANIO; j++) {
            tablero[i][j] = AGUA;
        }
    }
}

void mostrarTablero(char tablero[][TAMANIO], bool mostrarBarcos = false) {
    cout << "  ";
    for (int i = 0; i < TAMANIO; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < TAMANIO; i++) {
        cout << i << " ";
        for (int j = 0; j < TAMANIO; j++) {
            if (!mostrarBarcos && tablero[i][j] == BARCO) {
                cout << AGUA << " ";
            } else {
                cout << tablero[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void colocarBarcos(char tablero[][TAMANIO], int cantidadBarcos) {
    int barcosColocados = 0;
    while (barcosColocados < cantidadBarcos) {
        int fila = rand() % TAMANIO;
        int columna = rand() % TAMANIO;
        if (tablero[fila][columna] == AGUA) {
            tablero[fila][columna] = BARCO;
            barcosColocados++;
        }
    }
}

int main() {
    srand(time(NULL));
    char tablero[TAMANIO][TAMANIO];
    int cantidadBarcos = 5;
    inicializarTablero(tablero);
    colocarBarcos(tablero, cantidadBarcos);
    bool gameOver = false;
    int intentos = 0;
    while (!gameOver) {
        mostrarTablero(tablero);
        int fila, columna;
        cout << "Introduce fila: ";
        cin >> fila;
        cout << "Introduce columna: ";
        cin >> columna;
        if (tablero[fila][columna] == BARCO) {
            tablero[fila][columna] = 'X';
            cout << "HIT!" << endl;
            if (--cantidadBarcos == 0) {
                gameOver = true;
                cout << "GANASTE! Has hundido todos los barcos en " << intentos << " intentos." << endl;
            }
        } else if (tablero[fila][columna] == AGUA) {
            tablero[fila][columna] = 'O';
            cout << "AGUA" << endl;
        } else {
            cout << "Ya has intentado en esa casilla" << endl;
        }
        intentos++;
    }
    mostrarTablero(tablero, true);
}