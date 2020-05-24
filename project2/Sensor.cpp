#include "Sensor.h"

Project2::Sensor::Sensor(string name, Signal &source)
    :name(name), source(source)
{

}

void
Project2::Sensor::takeReading(Time t, DataRecorder &recorder)
{
    recorder.log(t, name, (&getSource())->getVoltageAtTime(t), getUnits());
}

string
Project2::Sensor::getName() const
{
    return name;
}

Signal &
Project2::Sensor::getSource()
{
    return source;
}
