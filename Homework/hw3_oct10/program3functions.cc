// Copyright 2024 maximusf
// CSCE240 Programing Assignment 3
// 10/10/2024

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

// WIP
void SortByRow(double arr[][10], int num_rows, int sort_row, bool ascending) {
    // Bubble sort algorithm to sort rows based on values in the specified sort_row
    for (int i = 0; i < num_rows - 1; i++) {
        for (int j = 0; j < num_rows - i - 1; j++) {
            bool condition;
            if (ascending) {
                condition = arr[j][sort_row] > arr[j + 1][sort_row]; // Ascending order
            } else {
                condition = arr[j][sort_row] < arr[j + 1][sort_row]; // Descending order
            }
            
            // If the condition is met, swap the entire rows
            if (condition) {
                for (int k = 0; k < 10; k++) {
                    double temp = arr[j][k];
                    arr[j][k] = arr[j + 1][k];
                    arr[j + 1][k] = temp;
                }
            }
        }
    }
}




// WIP
void MedianInCol(const double arr[][10], int num_rows, int num_cols) {
    for (int i = 0; i < num_cols; i++) {
        double median = 0.0;
        if (num_rows % 2 == 0) {
            median = (arr[num_rows / 2 - 1][i] + arr[num_rows / 2][i]) / 2;
        } else {
            median = arr[num_rows / 2][i];
        }
        cout << median << endl;
    }
}

// WIP
void ModeInCol(const double arr[][10], int num_rows, int num_cols) {
    int mode = 0;
    int max = 0;
    for (int i = 0; i < num_cols; i++) {
        int count = 0;
        for (int j = 0; j < num_rows; j++) {
            if (arr[j][i] == arr[mode][i]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            mode = i;
        }
    }
    cout << arr[mode][mode] << endl;
}   