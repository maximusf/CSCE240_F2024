// Copyright 2024 maximusf
#include "arrayfunctions.h"
#include<iostream>
using std::cout;
using std::endl;
#include<iomanip> // for formatting output - setw 

//implementation of function PrintArray
void PrintArray( const float nums[], int size, int field ) {
    for ( int i = 0; i < size; ++i )
        cout << std::setw(field) << nums[i];
    cout << endl;
}


float Average( const float n[], int s ) {
    float sum = 0;
    for ( int i = 0; i < s; ++i )
        sum += n[i];
    return sum / s;
}

int LinearSearch( const float vals[], int size, float search ) {
    int found_position = -1; // found_position is -1 if not found
    for ( int i = 0; i < size && found_position == -1; ++i ){
        if ( vals[i] == search )
            found_position = i; // updates found_position if found
        }
        return found_position;
}

// to run:
// g++ -Wall -std=c++17 -c sept19.cc
// missing a step?
// g++ -Wall -std=c++17 *.o