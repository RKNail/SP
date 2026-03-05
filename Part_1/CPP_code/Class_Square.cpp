#include "Class_Square.h"

Square::Square(double side) : Abstract_Shape(side) {};

double Square::area() {
    return value * value;
}

double Square::perimeter() {
    return 4 * value;
}