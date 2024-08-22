#ifndef ROUNDEDSHAPEFACTORY_H
#define ROUNDEDSHAPEFACTORY_H

#include "shapefactory.h"
#include "roundedrectangle.h"
#include "roundedsquare.h"

class RoundedShapeFactory : public ShapeFactory
{
public:
    RoundedShapeFactory();

    // ShapeFactory interface
public:
    Shape *getSquare();
    Shape *getRectangle();
};

#endif // ROUNDEDSHAPEFACTORY_H
