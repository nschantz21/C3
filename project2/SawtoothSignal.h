#ifndef PROJECT2_SAWTOOTHSIGNAL_H
#define PROJECT2_SAWTOOTHSIGNAL_H

#include "PeriodicSignal.h"
#include "Time.h"
using Project2::PeriodicSignal;
using Project2::Time;


namespace Project2
{
    class SawtoothSignal: public PeriodicSignal
    {
        public:
            SawtoothSignal(double voltageOffset, Time timeOffset,
                double minVoltage, double maxVoltage, Time period);
            
            virtual double getVoltageAtTime(Time t) const;

    };
}

#endif
