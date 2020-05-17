/*
 * hw7.cpp
 * Nicholas Schantz
 * Assignment 7
 * 2020-05-19
 *
 * Program to test StringUtility Class.
 */

#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::string;
using std::cout;

#include "StringUtility.h"

using NickSchantz::StringUtility;

int main()
{
    vector<string> strings = {
        "The", "quick", "brown", "fox",
        "jumps", "over", "the", "lazy", "dog"
    };

    StringUtility strUtl;

    cout << "Testing StringUtility class\n";
    // test join
    string joinStr = strUtl.join(strings, ',');
    cout << "Joined: " << joinStr << "\n";

    // test reverse
    vector<string> revStr = strUtl.reverse(strings);
    cout << "Reversed: ";
    for (string str : revStr)
    {
        cout << str << " ";
    }
    cout << "\n";

    // test combine
    vector<string> leftVec = {"Mr.", "Mrs."};
    vector<string> rightVec = {"Jones", "Smith", "Williams"};

    vector<string> combinedStr = strUtl.combine(leftVec, rightVec);
    cout << "Combined: ";
    for (string str : combinedStr)
    {
        cout << str << " ";
    }
    cout << "\n";

    // test leftPad
    vector<string> paddedStr = strUtl.leftPad(strings, '*');
    cout << "Left Paded: ";
    for (string str : paddedStr)
    {
        cout << str << " ";
    }
    cout << "\n";

    return 0;
}
