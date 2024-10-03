// Copyright 2024 maximusf
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

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
        }

    } while ( grades[i - 1] >= 0 );
    // segmentation fault (core dumped)

    return 0;
}