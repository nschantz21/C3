/*
 * Define SineSignal methods
 */
#include <math.h>
#include "SineSignal.h"

Project2::SineSignal::SineSignal(double voltageOffset, Time timeOffset,
    double minVoltage, double maxVoltage, Time period)
    :PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period)
{

}

double
Project2::SineSignal::getVoltageAtTime(Time t) const
{
    // calculate wave form separately for clarity
    double wave = sin(
        (
            t.getTotalTimeAsSeconds()
            + getTimeOffset().getTotalTimeAsSeconds()
        )
        * 2.0 
        * PI 
        / getPeriod().getTotalTimeAsSeconds()
    );
    
    return getVoltageOffset() 
        + getMinVoltage() 
        + (getMaxVoltage() - getMinVoltage()) 
        / 2.0 
        + wave 
        * (getMaxVoltage() - getMinVoltage()) 
        / 2.0;
}
