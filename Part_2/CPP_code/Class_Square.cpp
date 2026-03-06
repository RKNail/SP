#include "Class_Square.h"
#include <iostream>
Square::Square(double side, double x, double y) : Abstract_Shape(x, y), side(side) {}

double Square::area() {
    return side * side;
}

double Square::perimeter() {
    return 4 * side;
}

void Square::print() {
    std::cout << "Square with center in point: ";
    Abstract_Shape::print();
    std::cout << " and side = " << side << std::endl;
}