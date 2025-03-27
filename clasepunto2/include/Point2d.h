#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
#include <cmath>

class Point2d {
private:
    double x, y;

public:
    // Constructores
    Point2d();
    Point2d(double x, double y);

    // Getters y setters
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    // Sobrecarga de operadores aritméticos
    Point2d operator+(const Point2d& other) const;
    Point2d operator-(const Point2d& other) const;
    Point2d operator*(double scalar) const;
    Point2d operator/(double scalar) const;

    // Métodos adicionales
    double distancia(const Point2d& otro = Point2d()) const;
    Point2d puntoMedio(const Point2d& otro) const;
    Point2d vectorUnitario() const;

    // Mostrar punto
    void mostrar() const;
};

#endif // POINT2D_H
