/*
 * MonitoringSystem.h
 * Define MonitoringSystem class
 */
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
            // ok to use pointer of abstract class
            void addSensor(Sensor *s);
            void takeReading(Time t) const;

        private:
            DataRecorder recorder;
            // ordered collection of sensor pointers
            // pointers of abstract class
            vector<Sensor*> sensors;
    };
}

#endif
