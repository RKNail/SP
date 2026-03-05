//
// Created by rodion on 3/4/26.
//

#ifndef SP_SHAPE_H
#define SP_SHAPE_H

typedef struct {
    double (*area)(void*);
    double (*perimeter)(void*);
} vtable;

typedef struct {
    double side;
    vtable* vptr;
} shape;

void make_shape(void*, int, double);

#endif //SP_SHAPE_H