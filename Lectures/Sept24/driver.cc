// Copyright 2024 maximusf
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<cstdlib>
#include<ctime>
#include"arrayfunctions.h"

int main() {
    srand(time(0));

    int kSize = 5;
    float my_array[kSize] = {};
    for ( int i = 0; i < kSize; ++i )
        my_array[i] = rand() % 1000;
    PrintArray(my_array, kSize, 10);
    QuickSort(my_array, kSize);
    PrintArray(my_array, kSize, 10);
    return 0;
}