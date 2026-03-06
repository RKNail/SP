#include "Class_Circle.h"
#include <cmath>
#include <iostream>
#include <ostream>

const double PI = acos(-1);

Circle::Circle(double radius, double x, double y) : Abstract_Shape(x,y ), radius(radius) {
}

double Circle::area() {
     return PI * radius * radius;
}

double Circle::perimeter() {
     return PI * 2 * radius;
}

void Circle::print() {
     std::cout << "Center of circle in point: ";
     Abstract_Shape::print();
     std::cout << " and radius = " << radius << std::endl;
}