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
<<<<<<< HEAD

Shape *RoundedShapeFactory::getTriangle()
{
    return new RoundedTriangle();

}
=======
>>>>>>> 7053369 (Created concrete factory classes, 'NormalShapeFactory' and 'RoundedShapeFactory', both implements the 'ShapeFactory' interface)
