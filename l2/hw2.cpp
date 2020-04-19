/* 
 * hw2.cpp
 * Nicholas Schantz
 * Assignment 2
 * 2020-04-14
 * 
 * Program to test functionality of Date class.
 */
#include <ctime>
#include <iostream>
using std::cout;

#include "Date.h"
using NickSchantz::Date;

int main()
{
    // default constructor and display
    Date defaultDate = Date();
    cout << "Default constructor: ";
    defaultDate.display();

    // paramaterized constructor and display
    Date paramDate = Date(10, 19, 1987);
    cout << "Parameterized constructor: ";
    paramDate.display();

    // getters
    cout << "Getters:\n\tMonth: " << defaultDate.getMonth()
        << " Day: " << defaultDate.getDay()
        << " Year: " << defaultDate.getYear() << "\n";

    // errors
    Date invalidMonth(13, 1, 1);
    Date invalidDay(4, 31, 1980);
    Date invalidYear(1, 1, -5);

    return 0;
}
