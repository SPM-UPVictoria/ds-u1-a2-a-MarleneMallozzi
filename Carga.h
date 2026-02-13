#ifndef CARGA_H
#define CARGA_H

class Carga {
public:
    // Posición en X, Y de la carga y valor de la carga (q)
    int x, y;
    double q;

    // Constructor de la clase Carga
    Carga(int posX, int posY, double cargaQ) : x(posX), y(posY), q(cargaQ) {}

    // Método para obtener la posición X
    int getX() const { return x; }

    // Método para obtener la posición Y
    int getY() const { return y; }

    // Método para obtener el valor de la carga
    double getQ() const { return q; }
};

#endif
