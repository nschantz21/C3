/*
 * Define Signal class methods
 */
#include "Signal.h"

Project2::Signal::Signal(double voltageOffset, Time timeOffset)
    :voltageOffset(voltageOffset), timeOffset(timeOffset)
{

}

double
Project2::Signal::getVoltageOffset() const
{
    return voltageOffset;
}

Time
Project2::Signal::getTimeOffset() const
{
    return timeOffset;
}
