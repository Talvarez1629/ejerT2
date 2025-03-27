#include "Point2d.h"

// Constructores
Point2d::Point2d() : x(0), y(0) {}

Point2d::Point2d(double x, double y) : x(x), y(y) {}

// Getters y setters
double Point2d::getX() const { return x; }
double Point2d::getY() const { return y; }
void Point2d::setX(double x) { this->x = x; }
void Point2d::setY(double y) { this->y = y; }

// Sobrecarga de operadores aritméticos
Point2d Point2d::operator+(const Point2d& other) const {
    return Point2d(x + other.x, y + other.y);
}

Point2d Point2d::operator-(const Point2d& other) const {
    return Point2d(x - other.x, y - other.y);
}

Point2d Point2d::operator*(double scalar) const {
    return Point2d(x * scalar, y * scalar);
}

Point2d Point2d::operator/(double scalar) const {
    if (scalar != 0) {
        return Point2d(x / scalar, y / scalar);
    } else {
        throw std::runtime_error("División por cero no permitida");
    }
}

// Métodos adicionales
double Point2d::distancia(const Point2d& otro) const {
    return std::sqrt(std::pow(x - otro.x, 2) + std::pow(y - otro.y, 2));
}

Point2d Point2d::puntoMedio(const Point2d& otro) const {
    return Point2d((x + otro.x) / 2, (y + otro.y) / 2);
}

Point2d Point2d::vectorUnitario() const {
    double mag = distancia();
    if (mag != 0) {
        return *this / mag;
    } else {
        return Point2d(0, 0);
    }
}

// Mostrar punto
void Point2d::mostrar() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}