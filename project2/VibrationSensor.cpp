/*
 * VibrationSensor.cpp
 * Define VibrationSensor class methods
 */
#include "VibrationSensor.h"

Project2::VibrationSensor::VibrationSensor(string name, Signal &source)
    :Sensor(name, source)
{

}

string
Project2::VibrationSensor::getUnits() const
{
    return "Hertz (Hz)";
}
