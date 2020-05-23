#ifndef TIME_H
#define TIME_H

class Time
{
    public:
        Time(int hours, int minutes, int seconds);
        int getTotalTimeAsSeconds() const;
        const Time& operator+=(const Time& rhs) const;
        ostream& operator<<(ostream& os, const Time& rhs);  

    private:
        int seconds;

};

#endif
