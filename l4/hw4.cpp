/*
 * hw4.cpp
 * Nicholas Schantz
 * Assignment 4
 * 2020-04-28
 *
 * Program to test functionality of Complex class.
 */

#include <iostream>
using std::cout;
using std::cin;

#include "Complex.h"
using NickSchantz::Complex;

int main()
{
    // default constructor
    Complex zeroComplex = Complex();
    // paramaterized constructor
    Complex firstComplex(12, 5);
    
    // ostreams
    Complex streamComplex;
    cout << "input a complex number in the format <Real>+<Imaginary>i: ";
    cin >> streamComplex;
    cout << streamComplex << "\n";

    // addition
    cout << "Add: " << firstComplex + streamComplex << "\n" <<
    // subtraction
        "Sub: " << streamComplex - firstComplex << "\n" <<
    // equivalence
        std::boolalpha <<
        "Equal: " << (streamComplex == firstComplex) << "\n" <<
    // non-equivalence
        "Not Equal: " << (streamComplex != firstComplex) << "\n"
        << std::noboolalpha;
    return 0;
}
