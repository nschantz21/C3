#ifndef PROJECT2_CONSTANTSIGNAL_H
#define PROJECT2_CONSTANTSIGNAL_H

#include "Signal.h"
using Project2::Signal;

#include "Time.h"
using Project2::Time;

namespace Project2
{
    class ConstantSignal: public Signal
    {
        public:
            ConstantSignal(double voltageOffset, Time timeOffset);
            virtual double getVoltageAtTime(Time t);
    };
}

#endif
