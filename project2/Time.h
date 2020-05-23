#ifndef PROJECT2_TIME_H
#define PROJECT2_TIME_H

#include <iostream>
using std::cout;
using std::ostream;

namespace Project2
{
    class Time
    {
        friend ostream& operator<<(ostream& os, const Time& rhs);
        public:
            Time(int hours, int minutes, int seconds);
            int getTotalTimeAsSeconds() const;
            const Time& operator+=(const Time& rhs);
    
        private:
            int seconds;
    
    };

    ostream& operator<<(ostream& os, const Time& rhs);
}

#endif
