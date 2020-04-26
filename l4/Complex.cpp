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
    return Complex(this->real - other.real, this->imaginary - other.imaginary);
}
/*
bool 
NS::Complex::operator==(const Complex &op1, const Complex &op2)
{
    return op1.real == op2.real && 
    op1.imaginary == op2.imaginary;
}

bool
NS::Complex::operator!=const Complex &op1, const Complex &op2)
{
    return !(op1 == op2);
}
*/
