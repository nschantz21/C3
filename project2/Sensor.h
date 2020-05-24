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
    class Sensor
    {
        public:
            Sensor(string name, Signal &source);
            void takeReading(Time t, const DataRecorder &recorder) const;

        protected:
            virtual string getUnits() const = 0;
            string getName() const;
            Signal &getSource() const;

        private:
            string name;
            Signal &source;
    };
}

#endif
