#include "Class_Circle.h"
#include <cmath>
#include <iostream>
#include <ostream>

const double PI = acos(-1);

Circle::Circle(double radius) : Abstract_Shape(radius) {
}

double Circle::area() {
     return PI * value * value;
}

double Circle::perimeter() {
     return PI * 2 * value;
}


