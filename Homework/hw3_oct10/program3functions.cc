// Copyright 2024 maximusf
// CSCE240 Programming Assignment 3
// Due Oct 10, 2024

#include "program3functions.h"
// PASSED TEST
int CountAboveAv(const double arr[][10], int num_rows) {
    int count = 0;
    double av = 0.0;
    
    // Calculate the average of all elements in the specified rows
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < 10; j++) {
            av += arr[i][j]; // iterate through first and second row values (add them to av)
        }
    }
    
    av = av / (num_rows * 10);  // Divide by total number of elements in the rows to get average
    
    // Count how many elements are above the average
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i][j] > av) { // compares all elements in the matrix to average
                count++;
            }
        }
    }
    
    return count; // returns the number of elements above the average
}

// PASSED TEST
void SortByCol(double arr[][10], int num_rows, int num_cols, bool ascending) {
    for (int i = 0; i < num_rows - 1; i++) {
        for (int j = i + 1; j < num_rows; j++) {
            // Compare values in the specified column (num_cols - 1 indicates the last column)
            bool condition;
            if (ascending) {
                condition = arr[i][num_cols] > arr[j][num_cols]; // Sort in ascending order
            } else {
                condition = arr[i][num_cols] < arr[j][num_cols]; // Sort in descending order
            }
            if (condition) {
                // Swap entire rows if the condition is true
                for (int k = 0; k < 10; k++) { // Swap all 10 columns
                    double temp = arr[i][k];
                    arr[i][k] = arr[j][k];
                    arr[j][k] = temp;
                }
            }
        }
    }
}

// PASSED TEST
void SortByRow(double arr[][10], int num_rows, int sort_row, bool ascending) {
    for (int i = 0; i < 9; i++) {  // Iterate through columns within the row (9 because we compare to the next element)
        for (int j = i + 1; j < 10; j++) {  // Compare elements within the sort_row
            bool condition;
            if (ascending) {
                condition = arr[sort_row][i] > arr[sort_row][j]; // Sort in ascending order
            } else {
                condition = arr[sort_row][i] < arr[sort_row][j]; // Sort in descending order
            }

            if (condition) {
                // Swap entire columns if the condition is true
                for (int k = 0; k < num_rows; k++) {  // Swap the elements across all rows for the columns being swapped
                    double temp = arr[k][i];
                    arr[k][i] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
}

// PASSED TEST
double MedianInCol(const double arr[][10], int num_rows, int col) {
    // Step 1: Extract the column values into a temporary array
    double column_values[num_rows];
    for (int i = 0; i < num_rows; ++i) {
        column_values[i] = arr[i][col];
    }

    // Step 2: Manually sort the column values using bubble sort
    for (int i = 0; i < num_rows - 1; ++i) {
        for (int j = 0; j < num_rows - i - 1; ++j) {
            if (column_values[j] > column_values[j + 1]) {
                // Swap adjacent elements if they are in the wrong order
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
        return (column_values[num_rows / 2 - 1] + column_values[num_rows / 2]) / 2.0;
    }
}

// WIP
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int ModeInCol(double arr[][10], int numRows, int col, double mode[2]) {
    // Arrays to store unique values and their frequencies
    double values[numRows];
    int frequencies[numRows] = {0};
    int uniqueCount = 0;

    // Iterate over the column to count occurrences of each value
    for (int i = 0; i < numRows; ++i) {
        bool found = false;
        for (int j = 0; j < uniqueCount; ++j) {
            if (fabs(arr[i][col] - values[j]) < 1e-9) { // Close enough for equality
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
                mode[modeCount] = values[i];
                modeCount++;
            } else {
                // More than two modes
                mode[0] = mode[1] = -1;
                return 0;
            }
        }
    }

    // If there is only one mode, reset the second mode value to the default
    if (modeCount == 1) {
        mode[1] = -2;
    }

    return modeCount;
}
