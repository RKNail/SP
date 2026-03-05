//
// Created by rodion on 3/5/26.
//

#ifndef SP_ABSTACT_SHAPE_H
#define SP_ABSTACT_SHAPE_H

class Abstract_Shape {
protected:
    double value;
public:
    Abstract_Shape(double value) {
        this->value = value;
    }
    double get() const {
        return value;
    }
    void set(double val) {
        this->value = val;
    }
    virtual double area() = 0;
    virtual double perimeter() = 0;
};


#endif //SP_ABSTACT_SHAPE_H