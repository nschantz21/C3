/*
 * Person.cpp
 * Implement Person class
 */
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
    out << person.firstname << " "
        << person.lastname << " "
        << person.ageYears << " "
        << person.heightInches << " "
        << person.weightPounds << "\n";
    return out;
}
