#include "Abstract_shape.hpp"
#include "Class_Circle.h"
#include "Class_Square.h"
#include <iostream>
#include <vector>
#include <memory>

int main() {
    std::vector <std::unique_ptr<Abstract_Shape>> shapes;
    for (int i = 0; i < 5; ++i) {
        try {
            if (i & 1 and i < 4) {
                shapes.emplace_back(std::make_unique<Square>(rand() % 10 + 1, -i - 1, 0));
            } else if (!(i&1) and i < 4) {
                shapes.emplace_back(std::make_unique<Circle>(rand() % 10 + 1, i + 1, 0));
            } else {
                shapes.emplace_back(std::make_unique<Circle>(-5, 0, 0));
            }
        } catch (double exception) {
            std::cout << "Can't create shape with value: " << exception << std::endl;
        }

    }
    for (auto& shape : shapes) {
        shape->print();
        std::cout << "Area = " << shape->area()
        << " Perimeter = " << shape->perimeter() << std::endl << std::endl;
    }
    return 0;
}