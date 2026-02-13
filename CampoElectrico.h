#include <cmath>
#include <iostream>
#include "Carga.h"
#ifndef CAMPOELECTRICO_H
#define CAMPOELECTRICO_H

// Función template para calcular el campo eléctrico en un punto (x, y) dada la carga y su distancia
template <typename T>
T calcularCampoElectrico(double k, double q, double d) {
    return k * q / (d * d);
}

template <typename T>
void calcularCampo(Carga cargas[], int numCargas, T matriz[10][10], double k) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            matriz[i][j] = 0;  // Inicializamos la celda
            for (int c = 0; c < numCargas; ++c) {
                // Calculamos la distancia euclidiana entre la carga y la celda
                double d = std::sqrt(std::pow(i - cargas[c].getX(), 2) + std::pow(j - cargas[c].getY(), 2));
                if (d != 0) { // Evitar división por cero
                    matriz[i][j] += calcularCampoElectrico<T>(k, cargas[c].getQ(), d);
                }
            }
        }
    }
}
#endif
