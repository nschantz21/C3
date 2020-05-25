/*
 * PressureSensor.cpp
 * Define PressureSensor class methods
 */
#include "PressureSensor.h"

Project2::PressureSensor::PressureSensor(string name, Signal &source)
    :Sensor(name, source)
{

}

string 
Project2::PressureSensor::getUnits() const
{
    return "Pounds per square inch (PSI)";
}
