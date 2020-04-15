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
                int tday = today->tm_mday;
                int tmonth = today->tm_mon + 1;
                int tyear = today->tm_year + 1900;
                Date(tmonth, tday, tyear);
            }
            // constructor
            Date(int month, int day, int year)
            {
                // check validity of month
                if ((month < 1) || (month > 12)) {
                    cerr << "Month must be between 1 and 12\n";
                } else if (day > 31) { // check validity of day
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

            void display() const;

        private:
            int day;
            int month;
            int year;
    };
}

// inline function body must go in header
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
