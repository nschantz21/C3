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
    return getVoltageOffset() + getMinVoltage() +
    (getMaxVoltage() - getMinVoltage()) / 2.0 +
    sin(
        (t.getTotalTimeAsSeconds() + getTimeOffset().getTotalTimeAsSeconds()) *
        2.0 * PI / getPeriod().getTotalTimeAsSeconds()
    ) * (getMaxVoltage() - getMinVoltage()) / 2.0;
}
