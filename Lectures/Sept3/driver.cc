// Copyright 2024 maximusf
// driver source file with a main to call/test the functions
// written in sept3.cc
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"sept3.h"

int main() {
    int x;
    cout << "What letter of the alphabet do you want? ";
    cin >> x;
    cout << Letter(x) << endl;

    cout << ProgramGrade(100, 100, 100, 0, 100, 100) << endl;
    cout << ProgramGrade(100, 100, 100, 0, 100) << endl; //makes the 6th value the default value, 0 (according to header)

    double a = 15, b = 3.7;
    SwapValues(a,b);
    cout << "After calling SwapValues a = " << a << " and b = " << b << endl;
    
    //SwapValues(5,10); // needs a variable, not a constant (since it's reference)
    // can't send constants for non-const reference parameters

    int i1 = 10, i2 = 34;
    SwapValues(i1, i2);
    cout << "After calling SwapValues i1 = " << i1 << " and i2 = " << i2 << endl;
    
    return 0;
}


// to use, do make driver, then ./driver
/*
What letter of the alphabet to do you want? 4 --> d
100
After calling SwapValues a = 3.7 and b = 15
*/

// in terminal (to test for google formats)
// cpplint sept3.cc


