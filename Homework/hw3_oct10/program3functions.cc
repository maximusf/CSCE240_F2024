// Copyright 2024 maximusf
// CSCE240 Programming Assignment 3
// Due Oct 10, 2024

#include "program3functions.h"

const int kNumCols = 10;  // Constant for number of columns

// PASSED TEST
int CountAboveAv(const double arr[][kNumCols], int num_rows) {
    int count = 0;
    double av = 0.0;

    // Calculate the average of all elements in the specified rows
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < kNumCols; j++) {
            av += arr[i][j];  // iterate through first and second row values
        }
    }

    av = av / (num_rows * kNumCols);  // Calculate the average

    // Count how many elements are above the average
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < kNumCols; j++) {
            if (arr[i][j] > av) {  // Compare all elements to average
                count++;
            }
        }
    }

    return count;  // Return the number of elements above the average
}

// PASSED TEST
void SortByCol(double arr[][kNumCols], int num_rows,
 int num_cols, bool ascending) {
    for (int i = 0; i < num_rows - 1; i++) {
        for (int j = i + 1; j < num_rows; j++) {
            // Compare values in the specified column
            bool condition;
            if (ascending) {
                condition = arr[i][num_cols] > arr[j][num_cols];  // Ascending
            } else {
                condition = arr[i][num_cols] < arr[j][num_cols];  // Descending
            }
            if (condition) {
                // Swap entire rows if condition is true
                for (int k = 0; k < kNumCols; k++) {  // Swap all columns
                    double temp = arr[i][k];
                    arr[i][k] = arr[j][k];
                    arr[j][k] = temp;
                }
            }
        }
    }
}

// PASSED TEST
void SortByRow(double arr[][kNumCols], int num_rows,
int sort_row, bool ascending) {
    for (int i = 0; i < kNumCols - 1; i++) {  // Iterate through columns
        for (int j = i + 1; j < kNumCols; j++) {  // Compare elements
            bool condition;
            if (ascending) {
                condition = arr[sort_row][i] > arr[sort_row][j];  // Ascending
            } else {
                condition = arr[sort_row][i] < arr[sort_row][j];  // Descending
            }

            if (condition) {
                // Swap elements across all rows
                for (int k = 0; k < num_rows; k++) {
                    double temp = arr[k][i];
                    arr[k][i] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
}

// PASSED TEST
double MedianInCol(const double arr[][kNumCols], int num_rows, int col) {
    // Step 1: Extract the column values into a temporary array
    double column_values[kNumCols];  // Use constant instead of VLA
    for (int i = 0; i < num_rows; ++i) {
        column_values[i] = arr[i][col];
    }

    // Step 2: Manually sort the column values using bubble sort
    for (int i = 0; i < num_rows - 1; ++i) {
        for (int j = 0; j < num_rows - i - 1; ++j) {
            if (column_values[j] > column_values[j + 1]) {
                // Swap adjacent elements
                double temp = column_values[j];
                column_values[j] = column_values[j + 1];
                column_values[j + 1] = temp;
            }
        }
    }

    // Step 3: Calculate the median
    if (num_rows % 2 == 1) {
        // If odd, return the middle value
        return column_values[num_rows / 2];
    } else {
        // If even, return the average of the two middle values
        return (column_values[num_rows / 2 - 1]
        + column_values[num_rows / 2]) / 2.0;
    }
}

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int ModeInCol(const double arr[][kNumCols],
int numRows, int col, double modes[2]) {
    // Arrays to store unique values and their frequencies
    double values[numRows];
    int frequencies[numRows] = {0};
    int uniqueCount = 0;

    // Iterate over the column to count occurrences of each value
    for (int i = 0; i < numRows; ++i) {
        bool found = false;
        for (int j = 0; j < uniqueCount; ++j) {
            if (fabs(arr[i][col] - values[j]) < 1e-9) {  // Close enough for equality
                frequencies[j]++;
                found = true;
                break;
            }
        }
        if (!found) {
            values[uniqueCount] = arr[i][col];
            frequencies[uniqueCount] = 1;
            uniqueCount++;
        }
    }

    // Find the highest frequency
    int maxFreq = 0;
    for (int i = 0; i < uniqueCount; ++i) {
        if (frequencies[i] > maxFreq) {
            maxFreq = frequencies[i];
        }
    }

    // Find the mode(s) with the highest frequency
    int modeCount = 0;
    for (int i = 0; i < uniqueCount; ++i) {
        if (frequencies[i] == maxFreq) {
            if (modeCount < 2) {
                modes[modeCount] = values[i];  // Store mode as double
                modeCount++;
            } else {
                // More than two modes
                modes[0] = modes[1] = -1.0;  // Use -1.0 to indicate more than two modes
                return 0;
            }
        }
    }

    // If there is only one mode, reset the second mode value to the default
    if (modeCount == 1) {
        modes[1] = -2.0;  // Use -2.0 to indicate there is only one mode
    }

    return modeCount;
}
