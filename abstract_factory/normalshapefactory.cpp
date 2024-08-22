#include "normalshapefactory.h"

NormalShapeFactory::NormalShapeFactory() {}

Shape *NormalShapeFactory::getSquare()
{
    return new Square();
}

Shape *NormalShapeFactory::getRectangle()
{
    return new Rectangle();
}
