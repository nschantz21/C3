#ifndef DATE_H
#define DATE_H

#include <ctime>
#include <iostream>
using std::cerr;

// make a namespace
namespace NickSchantz
{
    class Date
    {
        public:
            // default constructor
            Date()
            {
                time_t now = time(0);
                struct tm *today = localtime(&now);
                day = today->tm_mday;
                month = today->tm_mon + 1;
                year = today->tm_year + 1900;
            }

            // parameterized constructor
            Date(int month, int day, int year)
            {
                //bool validDate = checkDay(month, day, year);
                //bool validDate = true;
                // check validity of month
                if ((month < 1) || (month > 12)) {
                    cerr << "Month must be between 1 and 12\n";
                } else if (day > checkDay[month - 1]) { // check validity of day
                    cerr << "Invalid number of days for this month\n";
                } else if (year < 0) { // check validity of year
                    cerr << "Year cannot be less than 0\n";
                } else {
                    this->month = month;
                    this->day = day;
                    this->year = year;
                }
            }

            // explicit inline of getter funcs
            inline int getDay() const;
            inline int getMonth() const;
            inline int getYear() const;

            // utility
            void display() const;
            
        private:
            int day;
            int month;
            int year;

            // helper member
            int checkDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    };
}

// inline function bodies
int
NickSchantz::Date::getYear() const
{
    return this->year;
}

int
NickSchantz::Date::getMonth() const
{
    return this->month;
}

int
NickSchantz::Date::getDay() const
{
    return this->day;
}
#endif
