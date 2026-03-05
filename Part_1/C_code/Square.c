#include "Square.h"

static vtable vtable_square[] = {area, perimeter};

void make_square(void* figure, double side) {
    shape* tmp = (shape*)figure;
    tmp->side = side;
    tmp->vptr = vtable_square;
}

static double area(void* figure) {
    return ((shape*)figure)->side * ((shape*)figure)->side;
}

static double perimeter(void* figure) {
    return 4 * ((shape*)figure)->side;
}