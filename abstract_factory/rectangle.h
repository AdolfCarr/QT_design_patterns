#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
public:
    Rectangle();

    // Shape interface
public:
    void draw();
};

#endif // RECTANGLE_H
