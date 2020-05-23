#include <ostream>
using std::cout;

#include "Time.h"

Time::Time(int hours, int minutes, int seconds)
{
    seconds += seconds + (minutes * 60) + (hours * 3600);
}



int
Time::getTotalTimeAsSeconds() const
{
    return seconds;
}

const Time&
// TODO: should parameter be const?
Time::operator+=(const Time& rhs) const
{
    int totalSeconds = getTotalTimeAsSeconds() + rhs.getTotalTimeAsSeconds();
    int totalHours = totalSeconds / 3600; // TODO: convert magic number to const member
    int remainderlMinutes = (totalSeconds / 60) - (totalHours * 60);
    int remainderrSeconds = totalSeconds
        -(totalHours * 3600)
        - (remainderlMinutes * 60);
    Time *returnTime = new Time(totalHours, remainderlMinutes, remainderrSeconds);
    return *returnTime;
}


