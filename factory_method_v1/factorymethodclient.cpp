#include "factorymethodclient.h"
#include "basecar.h"
#include <QString>
#include "fiat.h"
#include "honda.h"
#include "toyota.h"

/*
 * The constructor simulates ordering a car from the parking lot management base on the car type
 */

FactoryMethodClient::FactoryMethodClient() {

    BaseCar *car = nullptr;
    QString type = "F";  // Type could be "F", "H", or "T"
    if(type == "F"){
        car = new Fiat();
    } else if(type == "H"){
        car = new Honda();
    }else if(type == "T"){
        car = new Toyota();
    }
    if (car != nullptr) {
        car->drive();
    }
    // Call methods in other parts of the application simulating where instances of a car is needed in the application
    foo();
    bar();
}

void FactoryMethodClient::foo()
{
    BaseCar *car = nullptr;
    QString type = "H";  // Type could be "F", "H", or "T"
    if(type == "F"){
        car = new Fiat();
    } else if(type == "H"){
        car = new Honda();
    }else if(type == "T"){
        car = new Toyota();
    }
    if (car != nullptr) {
        car->drive();
    }
}

void FactoryMethodClient::bar()
{
    BaseCar *car = nullptr;
    QString type = "T";  // Type could be "F", "H", or "T"
    if(type == "F"){
        car = new Fiat();
    } else if(type == "H"){
        car = new Honda();
    }else if(type == "T"){
        car = new Toyota();
    }
    if (car != nullptr) {
        car->drive();
    }
}
