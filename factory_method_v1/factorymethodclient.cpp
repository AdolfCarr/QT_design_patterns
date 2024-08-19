#include "factorymethodclient.h"
#include "basecar.h"
#include <QString>
#include "fiat.h"
#include "honda.h"
#include "carfactory.h"

/*
 * The constructor simulates ordering a car from the parking lot management base on the car type
 */

FactoryMethodClient::FactoryMethodClient() {

    auto car = CarFactory::createCar("F");// Type could be "F", "H", or "T" if different no car type is instanciated

    if (car != nullptr) {
        car->drive();
    }
    // Call methods in other parts of the application simulating where instances of a car is needed in the application
    foo();
    bar();
}

void FactoryMethodClient::foo()
{
    auto car = CarFactory::createCar("H");// Type could be "F", "H", or "T" if different no car type is instanciated

    if (car != nullptr) {
        car->drive();
    }
}

void FactoryMethodClient::bar()
{
    auto car = CarFactory::createCar("T");// Type could be "F", "H", or "T" if different no car type is instanciated

    if (car != nullptr) {
        car->drive();
    }
}
