/*
 * Define SawtoothSignal methods
 */
#include <math.h>
#include "SawtoothSignal.h"

Project2::SawtoothSignal::SawtoothSignal(double voltageOffset, Time timeOffset,
    double minVoltage, double maxVoltage, Time period)
    :PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period)
{

}

double
Project2::SawtoothSignal::getVoltageAtTime(Time t) const
{
    double numerator = (
        (t.getTotalTimeAsSeconds() + getTimeOffset().getTotalTimeAsSeconds()) * 
        (getMaxVoltage() - getMinVoltage()) /
        getPeriod().getTotalTimeAsSeconds());
    double denomenator = getMaxVoltage() - getMinVoltage();

    return getVoltageOffset() + getMinVoltage() + fmod(numerator, denomenator);

}