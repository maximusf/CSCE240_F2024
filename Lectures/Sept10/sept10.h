// Copyright 2024 maximusf
// header file - contain definitions of things to be used in other places

// header guard preprocessor directive to keep things from being
// defined multiple times
#ifndef SEPT10_H_ // ignore ccplint message about path
#define SEPT10_H_
//prototypes
int FibonacciR ( int n ); // recursive version
int FibonacciI ( int n ); // iterative version (smarter)

// function will display the first numChars characters
// of the alphabet pausing for pauseTime milliseconds between characters
void OutputAlphabet( int numChar = 26, int pauseTime = 5000 );

#endif // end SEPT10_H_ guard - ignore cpplint