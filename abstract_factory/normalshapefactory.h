#ifndef NORMALSHAPEFACTORY_H
#define NORMALSHAPEFACTORY_H

#include "shapefactory.h"
#include "square.h"
#include "rectangle.h"
#include "triangle.h"

class NormalShapeFactory : public ShapeFactory
{
public:
    NormalShapeFactory();

    // ShapeFactory interface
public:
    Shape *getSquare();
    Shape *getRectangle();
    Shape *getTriangle();
};

#endif // NORMALSHAPEFACTORY_H
