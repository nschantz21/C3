/*
 * PeriodicSignal.h
 * Define PeriodicSignal abstract class
 */
#ifndef PROJECT2_PERIODICSIGNAL_H
#define PROJECT2_PERIODICSIGNAL_H

#include "Signal.h"
using Project2::Signal;
 
#include "Time.h"
using Project2::Time;

namespace Project2
{
    // abstract class
    class PeriodicSignal: public Signal
    {
        public:
            PeriodicSignal(
                double voltageOffset,
                Time timeOffset,
                double minVoltage,
                double maxVoltage, Time period);
            // redefining pure virtual functinon from Signal for clarity
            virtual double getVoltageAtTime(Time t) const = 0;

        protected:
            double getMinVoltage() const;
            double getMaxVoltage() const;
            Time getPeriod() const;


        private:
            double minVoltage;
            double maxVoltage;
            Time period;
    };
}

#endif
