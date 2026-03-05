#include <stdio.h>
#include <stdlib.h>
#include "Shape.h"

int main() {
    shape* arr = (shape*)malloc(sizeof(shape) * 5);
    for (int i = 0; i < 5; ++i) {
        make_shape(arr + i, rand() & 1, rand() % 10 + 1);
    }
    for (int i = 0; i < 5; ++i) {
        printf("Side: %lf, Area: %lf, Perimeter: %lf\n", arr[i].side,
            arr[i].vptr->area(arr+i), arr[i].vptr->perimeter(arr+i));
    }
    return 0;
}