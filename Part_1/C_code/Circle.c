#include "Circle.h"
#include <math.h>


#define PI acos(-1)

static vtable vtable_circle[] = {area, perimeter};

void make_circle(void* figure, double radius) {
    shape* tmp = (shape*)figure;
    tmp->side = radius;
    tmp->vptr = vtable_circle;
}

static double area(void* figure) {
    shape* tmp = (shape*)figure;
    return PI * tmp->side * tmp->side;
}

static double perimeter(void* figure) {
    shape* tmp = (shape*)figure;
    return 2 * PI * tmp->side;
}