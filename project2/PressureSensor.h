#ifndef PROJECT2_PRESSURESENSOR_H
#define PROJECT2_PRESSURESENSOR_H


#include "Sensor.h"
using Project2::Sensor;

namespace Project2
{
    class PressureSensor: public Sensor
    {
        public:
            PressureSensor(string name, Signal &source);

        protected:
            string getUnits() const;

    };
}

#endif
