/*
 * MonitoringSystem.cpp
 * Define MonitoringSystem class methods
 */
#include "MonitoringSystem.h"

Project2::MonitoringSystem::MonitoringSystem(ostream &out)
    :recorder(out)
{

}

void
Project2::MonitoringSystem::addSensor(Sensor *s)
{
    // add to end of vector to maintain order
    sensors.push_back(s);
}

void
Project2::MonitoringSystem::takeReading(Time t) const
{
    for (Sensor *s: sensors)
    {
        // calling method through pointer calls correct derive object's method
        s->takeReading(t, recorder);
    }
}
