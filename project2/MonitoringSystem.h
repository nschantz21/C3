#ifndef PROJECT2_MONITORINGSYSTEM_H
#define PROJECT2_MONITORINGSYSTEM_H

#include <vector>
using std::vector;

#include "Sensor.h"
#include "DataRecorder.h"
using Project2::Sensor;
using Project2::DataRecorder;

namespace Project2
{
    class MonitoringSystem
    {
        public:
            MonitoringSystem(ostream &out);
            void addSensor(Sensor *s);
            void takeReading(Time t) const;

        private:
            DataRecorder recorder;
            vector<Sensor*> sensors;
    };
}

#endif
