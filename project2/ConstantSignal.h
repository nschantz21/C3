/*
 * ConstantSignal.h
 * Define ConstantSignal class
 */
#ifndef PROJECT2_CONSTANTSIGNAL_H
#define PROJECT2_CONSTANTSIGNAL_H

#include "Signal.h"
using Project2::Signal;

namespace Project2
{
    class ConstantSignal: public Signal
    {
        public:
            ConstantSignal(double voltageOffset, Time timeOffset);
            // implement the pure virtual function from the base class
            virtual double getVoltageAtTime(Time t) const;
    };
}

#endif
