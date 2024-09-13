// Copyright 2024 maximusf
// Due: 2024-09-13
// program2functions.h
// program 2 header file

#ifndef _PROGRAM2FUNCTIONS_H_
#define _PROGRAM2FUNCTIONS_H_

#include <iostream>

bool LeapYear(int);

int LastDayOfMonth(int, int = 0);

bool ValidDate(int, int, int);

void NextDate(int& month, int& day, int& year);

void PreviousDate(int& month, int& day, int& year);

#endif  // _PROGRAM2FUNCTIONS_H_
