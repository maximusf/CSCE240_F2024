// Copyright 2024 maximusf
// CSCE240 Programing Assignment 3
// Driver for the program

#include <iostream>
#include "program3functions.h"

using std::cout;
using std::endl;

int main() {

    int rows = 0;
    int cols = 0;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    cout << endl;
    double arr[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = 0.0;
        }
    }   
    FillArray(arr, rows, cols);
    PrintArray(arr, rows, cols);
    SortByCol(arr, rows, cols);
    PrintArray(arr, rows, cols);
    SortByRow(arr, rows, cols);
    PrintArray(arr, rows, cols);
    MedianInCol(arr, rows, cols);
    ModeInCol(arr, rows, cols);
    CountAboveAv(arr, rows, cols);
    return 0;
}   