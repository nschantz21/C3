/*
 * StringUtility.h
 * Nicholas Schantz
 * Assignment 7
 * 2020-05-19
 *
 * StringUtility class definition.
*/

#ifndef STRINGUTILITY_H
#define STRINGUTILITY_H

#include <string>
#include <vector>

using std::string;
using std::vector;

namespace NickSchantz
{
    class StringUtility
    {
        public:

            string join(const vector<string> &strings, char delimiter) const;

            vector<string> reverse(const vector<string> &strings) const;

            vector<string> combine(
                const vector<string> &left,
                const vector<string> &right) const;
            
            vector<string> leftPad(const vector<string> &strings, char pad) const;
    };
}
#endif
