/*
 * Time.cpp
 * Define Time methods
 */
#include "Time.h"

Project2::Time::Time(int hours, int minutes, int seconds)
    :seconds(0)
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
    // convert seconds to HH:MM:SS
    int totalSeconds = rhs.getTotalTimeAsSeconds();
    // use friend status to access private data members:
    // HOUR_DIVISOR and MIN_DIVISOR
    int totalHours = totalSeconds / rhs.HOUR_DIVISOR;
    int remainderlMinutes = (totalSeconds / rhs.MIN_DIVISOR)
        - (totalHours * rhs.MIN_DIVISOR);
    int remainderrSeconds = totalSeconds
        - (totalHours * rhs.HOUR_DIVISOR)
        - (remainderlMinutes * rhs.MIN_DIVISOR);
    os << totalHours << "h:" << remainderlMinutes << "m:" << remainderrSeconds
        << "s";
    return os;
}
