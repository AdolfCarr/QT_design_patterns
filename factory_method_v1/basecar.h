#ifndef BASECAR_H
#define BASECAR_H

#include <QDebug>

class BaseCar
{
public:
    BaseCar();

    virtual void drive() = 0;
};

#endif // BASECAR_H
