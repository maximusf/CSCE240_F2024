// Copyright 2024 maximusf
// Aug 29
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// How to take in input from user

int main(){
    // compute a sum entered by the user
    int num, sum = 0;
    char op;
    do {
        cin >> num >> op;
        sum += num;
    } while ( op != '=' );

    cout << sum << endl;

    return 0;
}

// Shouldn't need to use arrays or strings for assignment
// Don't need to make a new Makefile, just use the one provided in assignment
// must read character '^' as well for power
// when the user types '?' program finishes
// Multiply as you go (just like a calculator would)
// You have to write the factorization method 
// (figure out how to get an input and spit out the factorization, just print it)
// Program checks if user inputs a valid factorization, if it's false, spit out the correct factorization

// to run,
/*
    g++ -Wall -std=c++17 aug.cc (creates executable)
    ./a.out (to run program)

    Try:
    7 + 12 + 15 + 0 + 22 =
    
    Result:
    56

*/



