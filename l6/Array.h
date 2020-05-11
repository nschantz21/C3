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

namespace NickSchantz
{
    template <typename ElemType, int SIZE>
    class Array<ElemType, SIZE>
    {
        public:
            // default constructor
            Array(): elements{0}
            {
                
            }

            // copy constructor
            Array(Array other<ElemType, SIZE>)
            {
                for (int arrIter = 0; arrIter <= SIZE; arrIter++)
                {
                    elements[arrIter] = other[arrIter];
                }
            }

            // operators
            Array<ElemType, SIZE> operator=(Array<ElemType, SIZE> &other);

            bool operator==(Array<ElemType, SIZE> other) const
            {
                for (int arrIter = 0; arrIter <= SIZE; arrIter++)
                {
                    if ((*this)[arrIter] != other[arrIter]) {
                        return false;
                    }
                }

                return true;
            }

            bool operator!=(Array<ElemType, SIZE> other) const
            {
                return ~(this == other);
            }

            // l-value version
            // Throw invalid_argument if subscript out of range
            ElemType operator[](int index)
            {
                try
                {
                    if ((index > SIZE) || (index < 0))
                    {
                        throw invalid_argument;
                    }
                    return this->elements[index];
                }
                catch (invalid_argument &ex)
                {
                    cerr << ex.what() << "\n";
                }
            }

            // r-value version
            // Throw invalid_argument if subscript out of range
            ElemType& operator[](int index) const
            {
                try
                {
                    if ((index > SIZE) || (index < 0))
                    {
                        throw invalid_argument;
                    }
                    return this->elements[index];
                }
                catch (invalid_argument &ex)
                {
                    cerr << ex.what() << "\n";
                }

            }


        private:
            elements ElemType[SIZE];

    };
}

#endif ARRAY_H
