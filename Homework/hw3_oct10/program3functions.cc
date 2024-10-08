// Copyright 2024 maximusf
// CSCE240 Programing Assignment 3
// 10/10/2024

#include "program3functions.h"

int CountAboveAv(const double arr[][10], int num_rows, int num_cols) {
    int count = 0;
    double av = 0.0;
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            av += arr[i][j];
        }
    }
    av = av / (num_rows * num_cols);
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            if (arr[i][j] > av) {
                count++;
            }
        }
    }
    return count;
}

void SortByCol(double arr[][10], int num_rows, int num_cols) {
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols - 1; j++) {
            for (int k = j + 1; k < num_cols; k++) {
                if (arr[i][j] > arr[i][k]) {
                    double temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
}

void SortByRow(double arr[][10], int num_rows, int num_cols) {
    for (int i = 0; i < num_cols; i++) {
        for (int j = 0; j < num_rows - 1; j++) {
            for (int k = j + 1; k < num_rows; k++) {
                if (arr[j][i] > arr[k][i]) {
                    double temp = arr[j][i];
                    arr[j][i] = arr[k][i];
                    arr[k][i] = temp;
                }
            }
        }
    }
}

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