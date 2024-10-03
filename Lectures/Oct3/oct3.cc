// Copyright 2024 maximusf
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

// lesson of the day. 
// If you create something with new, 
// make sure to delete it once you're done using it, 
// or else memory leak


int main() {
    // ask the user to input grades and store those in a block of memory
    int num_grades = 5, i = 0;
    int * grades = new int[num_grades];

    cout << "Enter your grades, input a negative value to stop.\n";
    do {
        cin >> grades[i];
        ++i;
        // when the block is full, we'll need to reserve a bigger block
        if ( i >= num_grades ) {
            int * temp = new int [num_grades * 2];
            for ( int j = 0; j < num_grades; ++j )
                temp[j] = grades[j];
            delete [] grades; // cleans up space, not deleting the variable/memory, 
            // it's just releasing the data in the address to the right
            grades = temp; // must free up the old block first to avoid a memory leak
            num_grades *= 2;
        }

    } while ( grades[i - 1] >= 0 );
    // segmentation fault (core dumped)

    cout << "Heres what I got: ";
    for ( int j = 0; j < i; ++j )
        cout << grades[j] << " ";
    cout << endl;


    return 0;
}