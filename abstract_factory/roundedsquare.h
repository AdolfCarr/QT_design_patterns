#ifndef ROUNDEDSQUARE_H
#define ROUNDEDSQUARE_H

#include "shape.h"

class RoundedSquare : public Shape
{
public:
    RoundedSquare();

    // Shape interface
public:
    void draw();
};

#endif // ROUNDEDSQUARE_H
