#include <ctime>
#include <iostream>

using std::cout;

int main()
{
    time_t now = time(0);
    struct tm *today = localtime(&now);
    int day = today->tm_mday;
    int month = today->tm_mon + 1;
    int year = today->tm_year + 1900;
    cout << day << " " << month << " " << year << "\n";

    return 0;
}
