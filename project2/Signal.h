/*
 * Signal.h
 * Define abstract Signal class
 */
#ifndef PROJECT2_SIGNAL
#define PROJECT2_SIGNAL

#include "Time.h"
using Project2::Time;

namespace Project2
{
    // abstract base class
    class Signal
    {
        public:
            Signal(double voltageOffset, Time timeOffset);
            // pure virtual function makes this an abstract class
            virtual double getVoltageAtTime(Time t) const = 0;
        
        protected:
            double getVoltageOffset() const;
            Time getTimeOffset() const;

        private:
            double voltageOffset;
            Time timeOffset;
    };
}

#endif
