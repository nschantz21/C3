#include "DataRecorder.h"

#include <iomanip>

Project2::DataRecorder::DataRecorder(ostream &out):
out(out)
{

}


void
Project2::DataRecorder::log(
    Time timestamp,
    string sensorName,
    double sensorVoltage,
    string sensorUnits)
{
    
    out <<
        timestamp << " - " <<
        sensorName << " - " <<
        std::setprecision(2) << std::fixed <<
        sensorVoltage << " " << sensorUnits << "\n";
}
