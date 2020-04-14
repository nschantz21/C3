#ifndef DATE_H
#define DATE_H

namespace NickSchantz
{
    class Date
    {
        public:
            // default constructor
            Date()
            {

            }
            // constructor
            Date(int month, int day, int year)
            {
                // use time library
            }

            // explicit inline of getter funcs
            inline int getDay() const;
            inline int getMonth() const;
            inline int getYear() const;
    
        private:
            int day, month, year;
    };
}

#endif
