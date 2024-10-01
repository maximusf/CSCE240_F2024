// Copyright 2024 maximusf
// CSCE240 Programming Assignment 3
// This program contains 10 functions that are used in the program
// to calculate the median, mode, and count of values in a 2D array
// Due Oct 10, 2024

#ifndef PROGRAM3FUNCTIONS_H
#define PROGRAM3FUNCTIONS_H

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

// Function Prototypes
int CountAboveAv(const double arr[][10], int num_rows, int num_cols);
void SortByCol(double arr[][10], int num_rows, int num_cols);
void SortByRow(double arr[][10], int num_rows, int num_cols);
void MedianInCol(const double arr[][10], int num_rows, int num_cols);
void ModeInCol(const double arr[][10], int num_rows, int num_cols);

#endif