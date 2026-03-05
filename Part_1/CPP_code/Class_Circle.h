//
// Created by rodion on 3/5/26.
//

#ifndef SP_CLASS_CIRCLE_H
#define SP_CLASS_CIRCLE_H
#include "Abstract_shape.hpp"

class Circle : public Abstract_Shape {
public:
    Circle(double);
    double area();
    double perimeter();
};

#endif //SP_CLASS_CIRCLE_H