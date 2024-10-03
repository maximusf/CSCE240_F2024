// Copyright 2024 maximusf
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

// the difference between structures and classes, 
// is that structures are public by default 
class BingoCall {
    public:
        char bingo;
        int number;
};

// structure/class name with uppercase, data with lowercase
/*
struct BingoCall {
    char bingo;
    int number;
}; // semi-colon is required
*/

void PrintCall(const BingoCall b) {
    cout << b.bingo << b.number << endl;
}

bool Valid(const BingoCall& b) {
    if ( b.bingo != 'B' && b.bingo != 'I' && b.bingo != 'N' && 
    b.bingo != 'G' && b.bingo != 'O')
        return false;
    if ( b.bingo == 'B' && (b.number < 1 || b.number > 15) ) // && has a higher preference than ||, so we use parentheses
        return false;
    if ( b.bingo == 'I' && (b.number < 16 || b.number > 30) )
        return false;
    if ( b.bingo == 'N' && (b.number < 31 || b.number > 45) )
        return false;
    if ( b.bingo == 'G' && (b.number < 46 || b.number > 60) )
        return false;
    if ( b.bingo == 'O' && (b.number < 61 || b.number > 75) )
        return false;
    return true;
}

int main () {
    BingoCall call; // declaring a structure of the BingoCall structure type
    call.bingo = 'G';
    call.number = 61;
    PrintCall(call);

    BingoCall * ptr = &call; //holds the address of BingoCall structure
    // accessing public members on a pointer
    cout << (*ptr).number << endl;
    cout << ptr->number << endl; //Does the same thing as line above, just a shortcut
    // -> takes an address on the left
    cout << (Valid(call) ? "it's good" : "invalid") << endl;

    return 0;
}


// use this if you want major memory leak (lol)
// this wouldn't happen in Java, but it does in C++

/*
int main() {
    int size = 10000;
    double * ptr = new double [size];
    char again = 'y';
    while ( again == 'y' ) {
        //delete [] ptr; // this would be the fix for memory loss
        ptr = new double [++size];
        for ( int i = 0; i < size; ++i ) 
            ptr[i] = i;
        cin >> again;
    }
}
*/

// lesson of the day. 
// If you create something with new, 
// make sure to delete it once you're done using it, 
// or else memory leak

/*
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
*/