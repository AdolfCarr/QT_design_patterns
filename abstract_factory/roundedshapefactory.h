#ifndef ROUNDEDSHAPEFACTORY_H
#define ROUNDEDSHAPEFACTORY_H

#include "shapefactory.h"
#include "roundedrectangle.h"
#include "roundedsquare.h"
#include "roundedtriangle.h"

class RoundedShapeFactory : public ShapeFactory
{
public:
    RoundedShapeFactory();

    // ShapeFactory interface
public:
    Shape *getSquare();
    Shape *getRectangle();
    Shape *getTriangle();
};

#endif // ROUNDEDSHAPEFACTORY_H
