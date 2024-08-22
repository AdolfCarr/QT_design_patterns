#ifndef SHAPE_H
#define SHAPE_H

#include <QDebug>

class Shape
{
public:
    Shape();
    virtual void draw() = 0;
};

#endif // SHAPE_H
