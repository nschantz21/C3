/*
 * Array.h
 * Nicholas Schantz
 * Assignment 6
 * 2020-05-12
 *
 * Array class definition
 */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>
using std::cerr;
using std::invalid_argument;

namespace NickSchantz
{
    template <typename ElemType, int SIZE>
    class Array
    {
        public:
            // default constructor
            Array()
            {}

            // copy constructor
            Array(const Array<ElemType, SIZE> &source)
            {
                for (int arrIter = 0; arrIter < SIZE; arrIter++)
                {
                    elements[arrIter] = source[arrIter];
                    
                }
            }

            // operators
            // assignment
            Array<ElemType, SIZE> operator=(const Array<ElemType, SIZE> source)
            {
                // prevent self-assignment
                if (source != *this){
                    // call to copy constructor
                    Array<ElemType, SIZE>(source);
                    // return destination for chained assignment
                    return *this;
                }
            }

            // equality
            bool operator==(const Array<ElemType, SIZE> other) const
            {
                for (int arrIter = 0; arrIter < SIZE; arrIter++)
                {
                    if (this->elements[arrIter] != other[arrIter]) {
                        return false;
                    }
                }

                return true;
            }

            // inequality
            bool operator!=(const Array<ElemType, SIZE> other) const
            {
                return !(*this == other);
            }

            // l-value version
            // Throw invalid_argument if subscript out of range
            ElemType& operator[](int index)
            {
                if ((index >= SIZE) || (index < 0))
                {
                    throw invalid_argument("index is out of range");
                }
                return this->elements[index];
            }

            // r-value version
            // Throw invalid_argument if subscript out of range
            const ElemType operator[](int index) const
            {
                if ((index >= SIZE) || (index < 0))
                {
                    throw invalid_argument("index is out of range");
                }
                return this->elements[index];
            }
        private:
            ElemType elements[SIZE];

    };
}

#endif
