// Copyright 2024 maximusf
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    const int kSize = 8;
    // unlike Java, an array is not an object in C++
    // we can initialize the values in the array when it's declared
    // to a list - if the size is bigger than the list, the remaining
    // elements will be initialized to 0
    //double my_real_array[kSize] = { 4, 2.3, -7.1 }; // 8 bits
    //double my_real_array[kSize] = {  };

    float my_real_array[kSize] = { 4, 2.3, -7.1 }; // 4 bits

    cout << my_real_array << endl; // prints memory address of array
    cout << my_real_array + 1 << endl; // adds bits to the memory address

    // output all of the array
    for ( int i = 0; i < kSize; ++i )
        cout << my_real_array[i] << " ";
    cout << endl;


    // input for array values
    cout << "Enter " << kSize << " real numbers ";
    //cin >> my_real_array; 
    // ^ will not compile:
    // the array is a fixed address, 
    // this would attempt
    // to change the address - illegal!
    for ( int i = 0; i < kSize; ++i )
        cin >> my_real_array[i];

    // output all of the array
    for ( int i = 0; i < kSize; ++i )
        cout << my_real_array[i] << " ";
    cout << endl;


    return 0;
}