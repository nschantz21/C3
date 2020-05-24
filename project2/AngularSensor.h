#ifndef PROJECT2_ANGULARSENSOR_H
#define PROJECT2_ANGULARSENSOR_H

#include "Sensor.h"
using Project2::Sensor;

namespace Project2
{
    class AngularSensor: public Sensor
    {
        public:
            AngularSensor(string name, Signal& source);
        
        protected:
            virtual string getUnits() const;
    };
}

#endif
