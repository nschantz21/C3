#ifndef PROJECT2_SIGNAL
#define PROJECT2_SIGNAL

#include "Time.h"
using Project2::Time;

namespace Project2
{
    class Signal
    {
        public:
            Signal(double voltageOffset, Time timeOffset):
                voltageOffset(voltageOffset), timeOffset(timeOffset) {};
            
            virtual double getVoltageAtTime(Time t) = 0;
        
        protected:
            double getVoltageOffset() const;
            Time getTimeOffset() const;

        private:
            double voltageOffset;
            Time timeOffset;
    };
}

#endif
