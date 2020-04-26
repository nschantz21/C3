/*
 * Complex.h
 * Nicholas Schantz
 * Assignment 4
 * 2020-04-28
 *
 * Create a Complex class that represents a complex number.
 */
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using std::ostream;
using std::istream;

namespace NickSchantz {
    class Complex
    {
    // declare stream friend functions
    friend istream &operator>>(istream &in, Complex &value);
    friend ostream &operator<<(ostream &out, const Complex &value);
    // friend bool operator==(const Complex &op1, const Complex &op2);
    // friend bool operator!=const Complex &op1, const Complex &op2);
    public:
        // constructor
        Complex(double real = 0.0, double imaginary = 0.0):
            real(real), imaginary(imaginary){};
        // operators
        // addition
        Complex operator+(const Complex &other) const;
        // subtraction
        Complex operator-(const Complex &other) const;
        // equivalence
        //bool operator==(const Complex &other) const;
        // non-equivalence
        //bool operator!=(const Complex &other) const;

    private:
        double real;
        double imaginary;
    };

    // stream insertion operator
    istream &operator>>(istream &in, Complex &value)
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
    ostream &operator<<(ostream &out, const Complex &value)
    {
        out << value.real <<  "+" << value.imaginary << "i";
        return out;

    }


}

#endif
