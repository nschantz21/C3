/*
 * hw6.cpp
 * Nicholas Schantz
 * Assignment 6
 * 2020-05-12
 *
 * Program to test functionality of Array class
 */

#include <iostream>
#include <stdexcept>
using std::cerr;
using std::cout;
using std::invalid_argument;

#include "Array.h"
using NickSchantz::Array;

const int ARRAY_SIZE = 5;

int main()
{
    // create array using default constructor
    Array<int, ARRAY_SIZE> defaultContructed;
    // assign all elements with lvalue subscript
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        defaultContructed[i] = i;
    }
    // print all elements with rvalue subscript
    cout << "print all elements of Array:\n";
    for (int j = 0; j < ARRAY_SIZE; j++)
    {
        cout << "\t" << defaultContructed[j] << "\n";
    }
    // const array using copy constructor 
    const Array<int, ARRAY_SIZE> constArray(defaultContructed);
    Array<int, ARRAY_SIZE> assignmentArray;
    assignmentArray = constArray;
    assignmentArray[0] = 8;
    
    // compare equality
    cout << "Compare equal Arrays: " << (defaultContructed == constArray) << "\n"
    // compare inequality
        << "Compare inequal Arrays: " << (assignmentArray != defaultContructed) << "\n";
    
    // invalid_argument exceptions on lvalue operator
    // negative index
    try 
    {
        cout << "negative lvalue: ";
        defaultContructed[-20] = 20;
    }
    catch (invalid_argument &ex)
    {
        cerr << ex.what() << "\n";
    }
    // index >= SIZE
    try 
    {
        cout << "index >= SIZE lvalue: ";
        defaultContructed[ARRAY_SIZE] = ARRAY_SIZE;
    }
    catch (invalid_argument &ex)
    {
        cerr << ex.what() << "\n";
    }

    // invalid_argument exceptions on rvalue operator
    // negative
    try 
    {
        cout << "negative rvalue: ";
        constArray[-1];
    }
    catch (invalid_argument &ex)
    {
        cerr << ex.what() << "\n";
    }
    // index >= SIZE
    try 
    {
        cout << "index >= SIZE rvalue: ";
        constArray[50];
    }
    catch (invalid_argument &ex)
    {
        cerr << ex.what() << "\n";
    }
    return 0;
}
