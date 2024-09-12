// Copyright 2024 maximusf
// Due: 2024-09-13
// program2functions.cc
// program 2 functions

#include <iostream>
using std::cout;
using std::endl;
#include "program2functions.h"

bool LeapYear(int year) {
    // returns true if leap year, false if not
    if (year % 400 == 0)
        return true;
    else if (year % 100 == 0)
        return false;
    else if (year % 4 == 0)
        return true;
    else
        return false;
}

int LastDayOfMonth(int month, int year) {
    // checks if month is valid
    if (month < 1 || month > 12) {
        return 0;
    }

    if (month == 2) {
        if (year <= 0) {
            return 0;
        }
        // checks if leap year
        // for February
        if (LeapYear(year)) {
            return 29;
        } else {
            return 28;
        }
    }

    switch (month) {
        // months with 31 days
        case 1: case 3:
        case 5: case 7:
        case 8: case 10:
        case 12:
            return 31;
        // months with 30 days
        case 4: case 6:
        case 9: case 11:
            return 30;
        default:
            return 0;
    }
}

bool ValidDate(int month, int day, int year) {
    // returns true if date is valid, false if not
    if (year <= 0) {
        return false;
    }
    if (month < 1 || month > 12) {
        return false;
    }
    int lastDay = LastDayOfMonth(month, year);
    if (day < 1 || day > lastDay) {
        return false;
    }
    return true;
}

void NextDate(int* month, int* day, int* year) {
    if (ValidDate(*month, *day, *year)) {
        // checks if the date is valid then
        // updates the date variables to the
        // next calendar date
        // for ex: 12/31/2022 --> 1/1/2023
        if (*day == LastDayOfMonth(*month, *year)) {
            if (*month == 12) {
                *month = 1;
                *day = 1;
                (*year)++;
            } else {
                (*month)++;
                *day = 1;
            }
        } else {
            (*day)++;
        }
    }
    else {
        // invalid date
        // do nothing
    }
}

void PreviousDate(int* month, int* day, int* year) {
    if (ValidDate(*month, *day, *year)) {
        // checks if the date is valid then
        // updates the date variables to the
        // previous calendar date
        // for ex: 12/1/2022 --> 11/30/2022
        if (*day == 1) {
            if (*month == 1) {
                *month = 12;
                *day = 31;
                (*year)--;
            } else {
                (*month)--;
                *day = LastDayOfMonth(*month, *year);
            }
        } else {
            (*day)--;
        }
    }
    else {
        // invalid date
        // do nothing
    }
}
