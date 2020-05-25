/*
 * PeriodicSignal.cpp
 * Define PeriodicSignal methods
 */
#include "PeriodicSignal.h"

Project2::PeriodicSignal::PeriodicSignal(double voltageOffset, Time timeOffset,
    double minVoltage, double maxVoltage, Time period)
        :Signal(voltageOffset, timeOffset), minVoltage(minVoltage),
        maxVoltage(maxVoltage), period(period)
{

}

double
Project2::PeriodicSignal::getMinVoltage() const
{
    return minVoltage;
}

double
Project2::PeriodicSignal::getMaxVoltage() const
{
    return maxVoltage;
}

Time
Project2::PeriodicSignal::getPeriod() const
{
    return period;
}