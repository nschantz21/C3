#ifndef PROJECT2_SINESIGNAL_H
#define PROJECT2_SINESIGNAL_H

#include "PeriodicSignal.h"
using Project2::PeriodicSignal;

namespace Project2
{
    class SineSignal: public PeriodicSignal
    {
        const double PI = 3.14159265358979323846;
        public:
            SineSignal(double voltageOffset, Time timeOffset,
                double minVoltage, double maxVoltage, Time period);
            
            virtual double getVoltageAtTime(Time t) const;
    };
}

#endif
