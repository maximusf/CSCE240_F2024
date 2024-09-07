// Copyright 2024 maximusf
// header file with function prototypes for anyone (programmer)
// who needs to use/call our functions
#ifndef _SEPT3_H_ // "if not defined"
#define _SEPT3_H_ // check if the label has been defined, if not, defines it


// function that returns the nth letter of the alphabet
char Letter(int n);

// function that computes the average of 6 program grades, dropping the lowest
double ProgramGrade(double, double, double, double, double, double = 0);

// swap the values of the two double variables
void SwapValues (double&, double&); // double& using by reference instead of by value

// swap the values of two integer variables
// we're OVERLOADING the SwapValues function - same name, distinct parameter lists
void SwapValues (int&, int&);

#endif // ending ifndef for _SEPT3_H_