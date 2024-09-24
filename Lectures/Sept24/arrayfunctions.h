// Copyright 2024 maximusf
// header guard is to make sure there are not multiple definitions

#ifndef ARRAY_FUNCTIONS_H_
#define ARRAY_FUNCTIONS_H_


// PrintArray function takes an array of floats and the size of the array
// as parameters

// making the array parameter constant means that this function can't modify the values in the array
// if we modify the values in the array, we change the values within the memory address of the array
void PrintArray( const float nums[], int size, int field = 6 );

// function to compute the average value in an array floats
float Average( const float n[], int s );

// Linear Search - find a value in an array
// 2 approaches, return boolean if value is there
// or return the index of the value being searched
int LinearSearch( const float vals[], int size, float search_value );

// quick sort function
void QuickSort(float vals[], int size);


#endif