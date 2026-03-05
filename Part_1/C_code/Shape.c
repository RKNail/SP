#include "Shape.h"
#include "Square.h"
#include "Circle.h"

void make_shape(void* figure, int type, double side) {
    switch (type) {
        case SQUARE:
            make_square(figure, side);
            break;

        case CIRCLE:
            make_circle(figure, side);
            break;

    }
}