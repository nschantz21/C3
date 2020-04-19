#include <iostream>
using std::cout;

#include "Date.h"

void
NickSchantz::Date::display() const
{
    cout << this->getMonth() << '/' 
        << this->getDay() << '/' 
        << this->getYear() << '\n';
}
