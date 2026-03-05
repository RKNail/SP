#include "Abstract_shape.hpp"
#include "Class_Circle.h"
#include "Class_Square.h"
#include <iostream>
#include <vector>
#include <memory>

int main() {
    std::vector <std::unique_ptr<Abstract_Shape>> shapes;
    for (int i = 0; i < 4; ++i) {
        if (i & 1) {
            shapes.emplace_back(std::make_unique<Square>(rand() % 10 + 1));
        } else {
            shapes.emplace_back(std::make_unique<Circle>(rand() % 10 + 1));
        }
    }
    for (auto& shape : shapes) {
        std::cout << "Side = " << shape->get() << " Area = " << shape->area() << " Perimeter = " << shape->perimeter() << std::endl ;
    }
    return 0;
}