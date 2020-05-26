/*
 * Person.h
 * Define Person class
 */
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using std::string;
using std::istream;
using std::ostream;

 namespace NickSchantz
 {
    class Person
    {
        friend istream &operator>>(istream &in, Person &person);
        friend ostream &operator<<(ostream &out, const Person &person);

        string firstname, lastname;
        int ageYears;
        double heightInches, weightPounds;
        const int PRECISION = 2;
    };

    istream &operator>>(istream &in, Person &person);
    ostream &operator<<(ostream &out, const Person &person);
 }

#endif
