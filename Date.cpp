/*
 * Date.cpp
 * Nicholas Schantz
 * 2020-04-07
 * 
 */

#include <iostream>
using std::cout;
using std::cerr;

class Date
{   
    // private members
    int month;
    int day;
    int year;

    public:
        // constructor
        Date(int month, int day, int year)
        {
            // set attributes using "this" pointer
            if ((month < 1) || (month > 12)) {
                cerr << "month must be between 1 and 12, inclusive\n";
            } else {
                this->month = month;
                this->day = day;
                this->year = year;
            }
        }

        // get and set functions
        void setMonth(int month)
        {
            if ((month < 1) || (month > 12)) {
                cerr << "month must be between 1 and 12, inclusive\n";
            } else {
                this->month = month;
            }
        }
        
        int getMonth()
        {
            return month;
        }

        void setDay(int day)
        {
            this->day = day;
        }
        
        int getDay()
        {
            return day;
        }
        
        void setYear(int year)
        {
            this->year = year;
        }

        int getYear()
        {
            return year;
        }

        // display
        void display()
        {
            cout << month << "/" << day << "/" << year <<"\n";
        }
};


int main()
{
    // initializer
    Date myBirthday(4, 21, 1992);

    // display
    myBirthday.display();

    // setters
    myBirthday.setMonth(10);
    myBirthday.setDay(5);
    myBirthday.setYear(1999);

    // getters
    cout << "My new birthday: " <<
        myBirthday.getMonth() << "/" <<
        myBirthday.getDay() << "/" <<
        myBirthday.getYear() << "\n";

    // force error
    myBirthday.setMonth(15);

    return 0;
}
