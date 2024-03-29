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
        bool operator==(const Complex &other) const;
        // non-equivalence
        bool operator!=(const Complex &other) const;

        double getReal() const {return real;}
        double getImaginary() const {return imaginary;}

    private:
        double real;
        double imaginary;
    };

// stream
istream &operator>>(istream &in, Complex &value);
ostream &operator<<(ostream &out, const Complex &value);
}

#endif
