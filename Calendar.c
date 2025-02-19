//Program to print the Calender using the C programming
#include <stdio.h>
#include <time.h>

// Print the leap year  format
int isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
 //Prints the number of the days in the month
int daysInMonth(int year, int month)
{
    if (month == 2)
    {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}
 // Print the main function
int main()
{
    int year, month;
    printf("Enter Year: ");
    scanf("%d", &year);
    printf("Enter Month(1-12): ");
    scanf("%d", &month);

    // Print the number of  days in the week
    int days = daysInMonth(year, month);
    printf("\n***********\n");
    printf("   %d-%02d\n", year, month);
    printf("************\n");
    printf("Sun Mon Tue Wed Thurs Fri Sat\n");

    // Print the time format using structure
    struct tm time_in = {0};
    time_in.tm_year = year - 1900;
    time_in.tm_mon = month - 1;
    time_in.tm_mday = 1;

    // Print the starting day of the week
    mktime(&time_in);
    int startingDay = time_in.tm_wday;

    // Print leading spaces for the first day of the month
    for (int i = 0; i < startingDay; i++)
    {
        printf("    ");
    }

    // Print days of the month
    for (int day = 1; day <= days; day++)
    {
        printf("%2d ", day);
        if ((day + startingDay) % 7 == 0 || day == days)
        {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}
