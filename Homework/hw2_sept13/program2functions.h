// Copyright 2024 maximusf
// Due: 2024-09-13
// program2functions.h
// program 2 header file

#ifndef HOMEWORK_HW2_SEPT13_PROGRAM2FUNCTIONS_H_
#define HOMEWORK_HW2_SEPT13_PROGRAM2FUNCTIONS_H_

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool LeapYear(int);

int LastDayOfMonth(int, int = 0);

bool ValidDate(int, int, int);

void NextDate(int* month, int* day, int* year);

void PreviousDate(int* month, int* day, int* year);

#endif  // HOMEWORK_HW2_SEPT13_PROGRAM2FUNCTIONS_H_
