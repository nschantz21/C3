/*
 * Person.cpp
 * Implement Person class
 */
#include <iostream>
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Person.h"

istream &
NickSchantz::operator>>(std::istream &in, NickSchantz::Person &person)
{
    in >> person.firstname 
        >> person.lastname
        >> person.ageYears
        >> person.heightInches
        >> person.weightPounds;
    return in;
}

ostream &
NickSchantz::operator<<(std::ostream &out, const NickSchantz::Person &person)
{
    // set fixed precision to match input file
    out << fixed << setprecision(person.PRECISION) <<
        person.firstname << " "
        << person.lastname << " "
        << person.ageYears << " "
        << person.heightInches << " "
        << person.weightPounds;
    return out;
}
