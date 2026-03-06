//
// Created by rodion on 3/5/26.
//

#ifndef SP_CLASS_SQUARE_H
#define SP_CLASS_SQUARE_H
#include "Abstract_shape.hpp"

class Square : public Abstract_Shape {
    double side;
public:
    Square(double, double, double);
    double area();
    double perimeter();
    void print();
};

#endif //SP_CLASS_SQUARE_H