// Copyright 2024 maximusf
// Due: 2024-09-13
// program2.cc
// program 2 driver file

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include "./program2functions.h"

// Helper function to count the total number of days
// from a reference point (e.g., year 0) to a specific date
int DaysFromStart(int month, int day, int year) {
    int total_days = 0;

    // Calculate days for all previous years
    for (int y = 1; y < year; y++) {
        total_days += (LeapYear(y)) ? 366 : 365;
    }

    // Add the days for all previous months in the current year
    for (int m = 1; m < month; m++) {
        total_days += LastDayOfMonth(m, year);
    }

    // Add the days in the current month
    total_days += day;

    return total_days;
}

void CompareDates(int month1, int day1, int year1,
int month2, int day2, int year2) {
    // Validate the dates
    if (!ValidDate(month1, day1, year1)
    || !ValidDate(month2, day2, year2)) {
        if (!ValidDate(month1, day1, year1)) {
        cout << month1 << "/" << day1
        << "/" << year1 << " is not a valid date" << endl;
        }
        if (!ValidDate(month2, day2, year2)) {
        cout << month2 << "/" << day2
        << "/" << year2 << " is not a valid date" << endl;
        }
        return;
    }

    // Calculate the total number of days from the reference point to each date
    int days1 = DaysFromStart(month1, day1, year1);
    int days2 = DaysFromStart(month2, day2, year2);

    // Calculate the difference in days
    int day_difference = days1 - days2;

    // Output the result
    if (day_difference == 0) {
        cout << month1 << "/"
        << day1 << "/" << year1
        << " is 0 days before "
        << month2 << "/" << day2
        << "/" << year2 << endl;
    } else if (day_difference > 0) {
        cout << month1 << "/"
        << day1 << "/" << year1
        << " is " << day_difference
        << " days after " << month2
        << "/" << day2 << "/" << year2 << endl;
    } else {
        cout << month1 << "/"
        << day1 << "/" << year1
        << " is " << -day_difference
        << " days before " << month2 << "/"
        << day2 << "/" << year2 << endl;
    }
}

int main() {
    int month1, day1, year1;
    int month2, day2, year2;
    char slash;

    // Read the first date (format: month/day/year)
    cin >> month1 >> slash >> day1 >> slash >> year1;

    // Read the second date (format: month/day/year)
    cin >> month2 >> slash >> day2 >> slash >> year2;

    // Compare the two dates
    CompareDates(month1, day1, year1, month2, day2, year2);

    return 0;
}
