
#include <iostream>
#include "Carga.h"
#include "CampoElectrico.h"

int main() {
    // Definimos constantes
    const double k = 9.0;  // Constante de Coulomb (simplificada)

    // Creamos las cargas
    Carga cargas[] = {
        Carga(2, 2, 5.0),  // Carga 1 en (2,2) con 5.0 C
        Carga(5, 5, -3.0), // Carga 2 en (5,5) con -3.0 C
        Carga(7, 8, 2.0)   // Carga 3 en (7,8) con 2.0 C
    };

    int numCargas = sizeof(cargas) / sizeof(cargas[0]);

    // Creamos la matriz para el campo eléctrico (tipo float)
    double matriz[10][10];

    // Calculamos el campo eléctrico en la matriz
    calcularCampo<double>(cargas, numCargas, matriz, k);

    // Mostramos la matriz resultante en consola
    std::cout << "Matriz del campo electrico (10x10):\n";
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}
