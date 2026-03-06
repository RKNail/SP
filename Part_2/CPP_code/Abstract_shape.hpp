//
// Created by rodion on 3/5/26.
//

#ifndef SP_ABSTACT_SHAPE_H
#define SP_ABSTACT_SHAPE_H
#include <iostream>
class Abstract_Shape {
    double x;
    double y;
public:
    Abstract_Shape(double x, double y) : x(x), y(y) {}
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual void print() {
        std::cout << "(" << x << "," << y << ")";
    }
};


#endif //SP_ABSTACT_SHAPE_H