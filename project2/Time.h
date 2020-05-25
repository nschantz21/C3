/*
 * Time.h
 * Define Time class
 */
#ifndef PROJECT2_TIME_H
#define PROJECT2_TIME_H

#include <iostream>
using std::cout;
using std::ostream;

namespace Project2
{
    class Time
    {
        // add output stream operator as friend function
        friend ostream& operator<<(ostream& os, const Time& rhs);
        public:
            Time(int hours, int minutes, int seconds);
            int getTotalTimeAsSeconds() const;
            const Time& operator+=(const Time& rhs);
    
        private:
            int seconds;
            const int HOUR_DIVISOR = 3600;
            const int MIN_DIVISOR = 60;
    
    };

    // declare overloaded output stream operator
    ostream& operator<<(ostream& os, const Time& rhs);
}

#endif
