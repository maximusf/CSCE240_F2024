// Copyright 2024 maximusf
// Due 9/4/24
// Prime Factorization
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// performs '^' operation
int power ( int base, int exponent ){
    int result = 1;
    for (int i = 0; i < exponent; ++i){
        result *= base;
    }
    return result;
}

// performs '*' operation
int multiplyWithPrevious ( int currentNum ){
    static int prevNum = 1; //Holds previous number, initialized to 1
    int result = prevNum * currentNum;
    prevNum = result; // update prevNum to current result
    return result;
}

void printFactorization ( int num ){
    int sign = (num < 0) ? -1 : 1; //determine if the number is negative
    num = abs(num);

    cout << sign << " * ";

    for (int i = 2; i * i <= num; ++i){
        int count = 0;
        while (num % i == 0){
            ++ count;
            num /= i;
        }
        if (count > 0){
            cout << i << "^" << count;
            if (num > 1){
                cout << " * ";
            }
        }
    }
    if (num > 1){
        cout << num << "^1";
    }

    cout << endl;
}

bool validateInputFormat( int expectedResult, int userInputResult ){
    int num, exponent;
    char symbol;

    cin >> num >> symbol;

    if ( symbol != '=' ) return false;

    expectedResult = num;
    userInputResult = (num < 0) ? -1 : 1; 

    // reset previous number for multiplication
    multiplyWithPrevious(1);

    bool validFormat = true;

    while (cin >> num >> symbol){
        if (symbol == '*'){
            userInputResult = multiplyWithPrevious(num);
        }
        else if (symbol == '^'){
            cin >> exponent;
            if (exponent < 0) return false; // exponent must be non-negative
            userInputResult = multiplyWithPrevious(power(num,exponent));
        } else if (symbol == '?'){
            userInputResult *= (num < 0) ? -1 : 1;
            break;
        }
        else {
            validFormat = false;
            break;
        }
    }

    return validFormat;
}

void checkFactorization( int expectedResult, int userInputResult ){
    if (userInputResult == expectedResult){
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. ";
        printFactorization(expectedResult);
    }
}

int main() {
    int expectedResult, userInputResult;
    
    if ( !validateInputFormat( expectedResult, userInputResult ) ){
        cout << "Invalid input format." << endl;
    } else {
        checkFactorization( expectedResult, userInputResult );
    }

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
    g++ -Wall -std=c++17 program1.cc (creates executable)
    ./a.out (to run program)

    Try:
    7 + 12 + 15 + 0 + 22 =
    
    Result:
    56

*/


