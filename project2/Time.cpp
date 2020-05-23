#include <iostream>
using std::cout;

#include "Time.h"

Project2::Time::Time(int hours, int minutes, int seconds):
seconds(0)
{
    this->seconds += seconds + (minutes * 60) + (hours * 3600);
}

int
Project2::Time::getTotalTimeAsSeconds() const
{
    return seconds;
}

const Project2::Time &
Project2::Time::operator+=(const Time &rhs)
{
    seconds += rhs.getTotalTimeAsSeconds();
    return *this;
}

ostream &
Project2::operator<<(ostream &os, const Time &rhs)
{
    int totalSeconds = rhs.getTotalTimeAsSeconds();
    int totalHours = totalSeconds / 3600;
    int remainderlMinutes = (totalSeconds / 60) - (totalHours * 60);
    int remainderrSeconds = totalSeconds
        -(totalHours * 3600)
        - (remainderlMinutes * 60);
    os << totalHours << "h:" << remainderlMinutes << "m:" << remainderrSeconds << "s";
    return os;
}
