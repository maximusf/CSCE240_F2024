// Copyright 2024 maximusf
// CSCE240 Programming Assignment 3
// Due Oct 10, 2024

#ifndef HOMEWORK_HW3_OCT10_PROGRAM3FUNCTIONS_H_  // Updated header guard
#define HOMEWORK_HW3_OCT10_PROGRAM3FUNCTIONS_H_

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

// Function Prototypes
int CountAboveAv(const double arr[][10], int num_rows);  // PASSED TEST
void SortByCol(double arr[][10], int num_rows, int num_cols, bool ascending);  // PASSED TEST
void SortByRow(double arr[][10], int num_rows, int sort_row, bool ascending);  // PASSED TEST
double MedianInCol(const double arr[][10], int num_rows, int col);  // PASSED TEST
int ModeInCol(const double arr[][10], int num_rows, int col, double modes[2]);  // PASSED TEST

#endif  // HOMEWORK_HW3_OCT10_PROGRAM3FUNCTIONS_H_
