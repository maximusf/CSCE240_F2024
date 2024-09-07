// Copyright 2024 maximusf
// source file that contains the implementation of our functions
// typically named the same as the header file
#include"sept3.h"

char Letter(int n) {
    if ( n < 1 || n > 26 )
        n = 1;
    return 'a' + n - 1;
}
double ProgramGrade(double g1, double g2, double g3, double g4, double g5, double g6) {
    double small = g1;
    if ( g2 < small )
        small = g2;
    if ( g3 < small )
        small = g3;
    if ( g4 < small )
        small = g4;
    if ( g5 < small )
        small = g5;
    if ( g6 < small )
        small = g6;    
    return (g1 + g2 + g3 + g4 + g5 + g6 - small) / 5;
}

// cpplint doesn't like the reference parameters IGNORE that error
void SwapValues(double& x, double& y) {
    double temp = x;
    x = y;
    y = temp;
    // if you dont use double&, it doesn't swap
}

// implementation of int version of SwapValues
void SwapValues(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}