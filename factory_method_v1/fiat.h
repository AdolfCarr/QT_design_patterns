#ifndef FIAT_H
#define FIAT_H

#include "basecar.h"

class Fiat : public BaseCar
{
public:
    Fiat();

    // BaseCar interface
public:
    void drive();
};

#endif // FIAT_H
