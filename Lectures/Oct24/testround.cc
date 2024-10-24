// Copyright 2024 maximusf
#include <cmath>

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// ceil = always rounds up to int
// floor = always rounds down to int
// pow (base, exponent)

double roundto( double x, int place) {
    // this is the formula to round to a certain place
    return floor ( x * pow(10, place) + 0.5 ) / pow(10, place);
}

int HowMany( const char carray[], char c ) {
    int count = 0;
    int i = 0;
    while (carray[i] != '\0') {
        if (carray[i] == c) {
            count++;
        }
        ++i;
    }

    // for (int i = 0; carray[i] != '\0'; ++i) {
    //     if (carray[i] == c) {
    //         count++;
    //     }
    // }

    return count;
}

int main() {
    const int kSize = 10;
    int x[kSize] = {};

    cout << HowMany("hello there", 'e') << endl; // this should output 3

    char word[] = "hello"; // {'h', 'e', 'l', 'l', 'o', '\0' }; all c-strings contain a null character at the end

    return 0;
}
    
//rounding
// int main() {
//     double num;
//     int decimals;
//     cin >> num >> decimals;
//     while ( num > 0) {
//         cout << num << " " << roundto(num, decimals) << endl;
//         cin >> num >> decimals;
//     }
// }

// g++ testround.cc
// ./a.out

// round up to 5 decimal places
// input: 1.234567 5
// output: 1.23457 1.23457

// round up to 2 decimal places
// input: 1.234567 2
// output: 1.23457 1.23

