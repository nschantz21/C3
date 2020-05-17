/*
 * StringUtility.cpp
 * Nicholas Schantz
 * Assignment 7
 * 2020-05-19
 *
 * StringUtility class implementation.
 */

#include "StringUtility.h"
#include <iostream>

namespace NS=NickSchantz;

using std::vector;
using std::string;
using std::cout;

string
NS::StringUtility::join(const vector<string> &strings, char delimiter) const
{
    // holder string
    string returnStr = "";
    // iterate through strings and add to holder string
    for (int i = 0; i < strings.size(); ++i)
    {
        returnStr += strings[i];
        // only add comma if not the last element in strings
        if (i < (strings.size() - 1))
        {
            returnStr += delimiter;
        }
    }
    return returnStr;
}

vector<string>
NS::StringUtility::reverse(const vector<string> &strings) const
{
   // holder vector
   vector<string> returnVector;

    // iterate over strings
    for (string str : strings)
    {
        // reverse the chars in each string into a holder string
        string revStr = "";
        string::const_reverse_iterator iter{str.rbegin()};
        while(iter != str.rend())
        {
            revStr += *iter;
            ++iter;
        }
        // add the holder to the holder vector
        returnVector.push_back(revStr);
    }

    return returnVector;
}

vector<string>
NS::StringUtility::combine(
    const vector<string> &left,
    const vector<string> &right) const
{
    // holder vector
    vector<string> combos;
    // iter left
    for (string lstr : left)
    {
        // iter right
        for (string rstr : right)
        {
            // add the combiend string to the holder vector
            combos.push_back(lstr + rstr);
        }
    }
    return combos;
}

vector<string>
NS::StringUtility::leftPad(const vector<string> &strings, char pad) const
{
    vector<string> padded;
    // find length of longest string
    int maxLen = 0;
    for (string str : strings)
    {
        maxLen = maxLen < str.size() ? str.size() : maxLen;
    }

    // add pad character to each string to amke its length equal to the longest
    // string
    for (string str : strings)
    {
        int diff = maxLen - str.size();
        padded.push_back(str.insert(0, diff, pad));
    }

    return padded;
}
