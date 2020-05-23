#ifndef PROJECT2_DATARECORDER_H
#define PROJECT2_DATARECORDER_H

#include <string>
#include <ostream>
using std::string;
using std::ostream;

#include "Time.h"
using Project2::Time;

namespace Project2
{
    class DataRecorder
    {
        public:
            DataRecorder(ostream &out);
            void log(
                Time timestamp,
                string sensorName,
                double sensorVoltage,
                string sensorUnits);

        private:
            ostream &out;

    };
}

#endif
