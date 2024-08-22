#include "roundedshapefactory.h"

RoundedShapeFactory::RoundedShapeFactory() {}

Shape *RoundedShapeFactory::getSquare()
{
    return new RoundedSquare();
}

Shape *RoundedShapeFactory::getRectangle()
{
    return new RoundedRectangle();
}
