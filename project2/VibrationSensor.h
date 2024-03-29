/*
 * VibrationSensor.h
 * Define VibrationSensor class
 */
#ifndef PROJECT2_VIBRATIONSENSOR_H
#define PROJECT2_VIBRATIONSENSOR_H

#include "Sensor.h"
using Project2::Sensor;

namespace Project2
{
    class VibrationSensor: public Sensor
    {
        public:
            VibrationSensor(string name, Signal &source);
        protected:
            // implementing pure virtual function
            virtual string getUnits() const;
    };
}

#endif
