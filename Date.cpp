/* 
 * Date.cpp
 * Nicholas Schantz
 * 2020-04-07
 */

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
            this->month = month;
            this->day = day;
            this->year = year;
        }

        // get and set functions
        void setMonth(int month)
        {
            this->month = month;
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
            std::cout << month << "/" << day << "/" << year <<"\n";
        }
}
