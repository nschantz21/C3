/*
 * Complex.cpp
 * Nicholas Schantz
 * Assignment 4
 * 2020-04-28
 *
 * Implementation of Complex class.
 */

#include "Complex.h"

using NickSchantz::Complex;

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
