// Copyright 2024 maximusf
// Intro to Pointers in C++

#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main () {
    // numbers is like  int * const
    int numbers[] = { 3, 7, 15, 22};
    //const int * const p1 = numbers;
    //int * const p1 = numbers;
    int * p1 = numbers;
    p1[3] = 8;  // NOTE: we can use the [] on pointers
                // anything we can do with arrays, we can do the same 
                // way with pointers [we can move pointers, we can't move arrays]
    //++p1;
    //++(*p1); // this is changing the integer

    for ( int i = 0; i < 4; ++i)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}

/*
int main () {
    // an array is like a constant pointer - holds an address, but the address can't change
    char phrase[] = "How are you doing?";
    cout << phrase << endl;
    // a pointer is more flexible
    char * cptr = phrase; //creating a pointer to the element and giving it the address of the first element
    cptr += 4; // holds the address of 'a' from phrase
    *cptr += 1; // makes the 'a' into 'b' (changes the value of the 4th element)
    cout << cptr << endl; //cptr now holds the address of the b

    int numbers[] = { 1, 7, 15, 22, 100, 300 };
    int * iptr = numbers;
    iptr += 4;
    *iptr += 4;
    cout << iptr << endl;
    for ( int i = 0; i < 6; ++i )
        //cout << numbers[i] << " ";
        cout << *(numbers + i) << " "; // same as what square bracket operator does
    cout << endl;


    return 0;
}
*/

/*
int main() {
    int i = 3;
    double d = 2.7;
    char c = 'a';
    cout << &i << endl;
    cout << &i + 1 << endl; // add 4 bytes to memory address
    //DANGEROUS - accessing the four bytes next to i and interpreting it as an integer
    // more dangerous to modify - seg fault / core dump
    //cout << *(&i + 1) << endl; //pick up 4 bytes, then interpret as an integer

    cout << &d << endl;
    cout << &d + 1 << endl;
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

*/