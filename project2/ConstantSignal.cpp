#include "ConstantSignal.h"

Project2::ConstantSignal::ConstantSignal(double voltageOffset, Time timeOffset)
    :Signal(voltageOffset, timeOffset)
{

}

double
Project2::ConstantSignal::getVoltageAtTime(Time t) const
{
    return getVoltageOffset();
}
