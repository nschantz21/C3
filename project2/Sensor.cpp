/*
 * Sensor.cpp
 * Define Sensor class methods
 */
#include "Sensor.h"

Project2::Sensor::Sensor(string name, Signal &source)
    :name(name), source(source)
{

}

// recorder parameter const because DataRecorder.log() is const
void
Project2::Sensor::takeReading(Time t, const DataRecorder &recorder) const
{
    recorder.log(t, name, getSource().getVoltageAtTime(t), getUnits());
}

string
Project2::Sensor::getName() const
{
    return name;
}

Signal &
Project2::Sensor::getSource() const
{
    return source;
}
