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
    Date defaultDate = Date();
    defaultDate.display();


    time_t now = time(0);
    struct tm *today = localtime(&now);
    int day = today->tm_mday;
    int month = today->tm_mon + 1;
    int year = today->tm_year + 1900;
    cout << day << " " << month << " " << year << "\n";
    return 0;
}