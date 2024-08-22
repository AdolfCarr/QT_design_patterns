#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "shape.h"

class ShapeFactory
{
public:
    ShapeFactory();
    virtual Shape * getSquare() = 0;
    virtual Shape * getRectangle() = 0;
    virtual Shape * getTriangle() =0;
};

#endif // SHAPEFACTORY_H
