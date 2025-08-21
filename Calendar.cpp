// Program to print a calendar using C++


#include <iostream>
#include <time.h>
using namespace std;

// To check the leap year
bool isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Returns the days of the months
int daysInMonth(int year, int month)
{
    if (month == 2)
        return isLeapYear(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int main()
{
    int year, month;
    cout << " **Simple Calendar**\n " << endl;
    cout << "Enter Year: ";
    cin >> year;
    cout << "Enter Month(1-12): ";
    cin >> month;

    int days = daysInMonth(year, month);

    // Calendar header
    cout << "\n***********\n";
    cout << "   " << year << "-" << (month < 10 ? "0" : "") << month << endl;
    cout << "***********\n";
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    // Setup first day of given month
    tm time_in = {};
    time_in.tm_year = year - 1900;
    time_in.tm_mon = month - 1;
    time_in.tm_mday = 1;
    mktime(&time_in);

    int startingDay = time_in.tm_wday;

    // Print empty spaces before 1st date
    for (int i = 0; i < startingDay; i++)
        cout << "    ";

    // Print all days of the month
    for (int day = 1; day <= days; day++)
    {
        cout << (day < 10 ? "  " : " ") << day << " ";
        if ((day + startingDay) % 7 == 0 || day == days)
            cout << endl;
    }

    return 0;
}
