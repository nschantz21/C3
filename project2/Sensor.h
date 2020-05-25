/*
 * Sensor.h
 * Define Abstract Sensor class
 */
#ifndef PROJECT2_SENSOR_H
#define PROJECT2_SENSOR_H

#include <string>
using std::string;

#include "Time.h"
#include "Signal.h"
#include "DataRecorder.h"
using Project2::Time;
using Project2::Signal;
using Project2::DataRecorder;

namespace Project2
{
    // abstract class
    class Sensor
    {
        public:
            Sensor(string name, Signal &source);
            void takeReading(Time t, const DataRecorder &recorder) const;

        protected:
            // pure virtual function
            virtual string getUnits() const = 0;
            string getName() const;
            // able to use reference of abstract class
            Signal &getSource() const;

        private:
            string name;
            // ok if reference to abstract class
            Signal &source;
    };
}

#endif
