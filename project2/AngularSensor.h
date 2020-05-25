/*
 * AngularSensor.h
 * Define AngularSensor class
 */
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
            // implement pure virtual function
            virtual string getUnits() const;
    };
}

#endif
