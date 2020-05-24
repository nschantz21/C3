#ifndef PROJECT2_TEMPERATURESENSOR_H
#define PROJECT2_TEMPERATURESENSOR_H

#include "Sensor.h"
using Project2::Sensor;

namespace Project2
{
    class TemperatureSensor: public Sensor
    {
        public:
            TemperatureSensor(string name, Signal &sensor);
        protected:
            string getUnits() const;
    };
}

#endif
