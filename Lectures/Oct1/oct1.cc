// Copyright 2024 maximusf
// Intro to Pointers in C++

#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    int i = 3;
    double d = 2.7;
    char c = 'a';
    cout << &i << endl;
    cout << &d << endl;
    // so, pointers and references are like inverse operations (sqr and sq)
    cout << *(&d) << endl; // & and * are inverse operations
    // * is trying to go to an address, but d is not an address, so it doesn' work
    //cout << &(*d) << endl; // this doesn't make sense, d is not an address
    cout << &c << endl;

    // ptr is a pointer to an integer, so it should be assigned
    // the address of some integer in memory
    int * iptr = &i;
    cout << "iptr = " << iptr << endl;
    cout << "&iptr = " << &iptr << endl;
    cout << "*iptr = " << *iptr << endl;
    return 0;
}