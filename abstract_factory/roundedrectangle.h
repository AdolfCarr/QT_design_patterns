#ifndef ROUNDEDRECTANGLE_H
#define ROUNDEDRECTANGLE_H

#include "shape.h"

class RoundedRectangle : public Shape
{
public:
    RoundedRectangle();

    // Shape interface
public:
    void draw();
};

#endif // ROUNDEDRECTANGLE_H
