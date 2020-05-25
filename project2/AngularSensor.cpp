/*
 * AngularSensor.cpp
 * Define AngularSensor class methods
 */
#include "AngularSensor.h"

Project2::AngularSensor::AngularSensor(string name, Signal& source):
    Sensor(name, source)
{

}

string
Project2::AngularSensor::getUnits() const
{
    return "Radians";
}
