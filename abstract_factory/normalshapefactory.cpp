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
<<<<<<< HEAD

Shape *NormalShapeFactory::getTriangle()
{
    return new Triangle();
}
=======
>>>>>>> 7053369 (Created concrete factory classes, 'NormalShapeFactory' and 'RoundedShapeFactory', both implements the 'ShapeFactory' interface)
