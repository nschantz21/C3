/*
 * Program to test functionality of Person Class
 */

#include <iostream>
using std::cout;
using std::ios;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include <sstream>
using std::ostringstream;

#include "Person.h"
using NickSchantz::Person;

int main()
{
    // Open a file named “hw8-input.txt” using an fstream
    ifstream in("hw8-input.txt", ios::in);
    ostringstream person_stream;
    Person holder;
    // If the file opened successfully:
    if (in)
    {
        // While the end of the file has not been reached:
        // Extract the next person from the file
        while(in >> holder)
        {
            // Insert the person and a newline into a stringstream
            person_stream << holder << "\n";
        }
        // Output the contents of the stringstream to stdout
        cout << person_stream.str();
    }
    return 0;
}