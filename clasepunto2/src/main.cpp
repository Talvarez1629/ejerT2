#include <iostream>
#include "Point2d.h"

int main() {
    Point2d p1(3, 4);
    Point2d p2(6, 8);
    
    std::cout << "Distancia de p1 al origen: " << p1.distancia() << std::endl;
    std::cout << "Distancia entre p1 y p2: " << p1.distancia(p2) << std::endl;
    
    Point2d medio = p1.puntoMedio(p2);
    std::cout << "Punto medio: "; medio.mostrar();
    
    Point2d unitario = p1.vectorUnitario();
    std::cout << "Vector unitario de p1: "; unitario.mostrar();
    
    return 0;
}
