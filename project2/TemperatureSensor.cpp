/*
 * TemperatureSensor.cpp
 * Define TemperatureSensor class methods
 */
#include "TemperatureSensor.h"

Project2::TemperatureSensor::TemperatureSensor(string name, Signal &source)
    :Sensor(name, source)
{

}

string
Project2::TemperatureSensor::getUnits() const
{
    return "Degrees Celsius";
}
