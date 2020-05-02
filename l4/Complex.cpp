/*
 * Complex.cpp
 * Nicholas Schantz
 * Assignment 4
 * 2020-04-28
 *
 * Implementation of Complex class.
 */

#include "Complex.h"

using namespace NickSchantz;

Complex 
NickSchantz::Complex::operator+(const Complex &other) const
{
    return Complex(this->real + other.real, this->imaginary + other.imaginary);
}

Complex 
NickSchantz::Complex::operator-(const Complex &other) const
{
    return Complex(
        this->real - other.real,
        this->imaginary - other.imaginary
    );
}

bool 
NickSchantz::Complex::operator==(const Complex &other) const
{
    return real == other.getReal() && 
        imaginary == other.getImaginary();
}

bool
NickSchantz::Complex::operator!=(const Complex &other) const
{
    return !(*this == other);
}

// stream insertion operator
istream &
NickSchantz::operator>>(istream &in, Complex &value)
{
    // read in the real number
    double real, imaginary;
    char c;
    in >> real >> c >> imaginary >> c;
    value.real = real;
    value.imaginary = imaginary;
    return in;
}

// stream extraction operator
ostream &
NickSchantz::operator<<(ostream &out, const Complex &value)
{
    out << value.real <<  "+" << value.imaginary << "i";
    return out;

}
