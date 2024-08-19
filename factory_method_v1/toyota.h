#ifndef TOYOTA_H
#define TOYOTA_H

#include "basecar.h"

class Toyota : public BaseCar
{
public:
    Toyota();

    // BaseCar interface
public:
    void drive();
};

#endif // TOYOTA_H
