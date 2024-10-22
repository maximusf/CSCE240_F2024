// Copyright 2024 maximusf
// test functionality of Book class

#include<iostream>
using std::cout;
using std::endl;
#include "book.h"

int main() {
    Book b;
    cout << b << endl;
    b.SetNumChapter(3);
    b.SetChapter(1, "Intro");
    b.SetChapter(2, "Body");
    b.SetChapter(3, "Conclusion");
    b.SetChapter(4, "blah");
    cout << b << endl;

    Book copy = b; // copy constructor
    copy.SetChapter(3, "Hey");
    copy.SetNumChapter(2);
    cout << b << "\n" << copy << endl;


    copy = b; // assignment operator, not a copy constructor
    copy.SetNumChapter(10);
    cout << b << "\n" << copy << endl;



    return 0;
}

// g++ -Wall -std=c++17 -c book.cc
// g++ -Wall -std=c++17 


