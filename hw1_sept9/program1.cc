// Copyright 2024 maximusf
// Prime Factorization Calculator
// Due Sept 4, 2024
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


// Validates that the input follows the
// correct format with '=' sign
bool validateInput(int integer, char equalSign) {
    if (equalSign != '=') {
        cout << "Invalid input" << endl;
        return false;
    }
    return true;
}

// Ensures the input for pos_neg is either 1 or -1
bool validatePosNeg(int pos_neg) {
    if (pos_neg != 1 && pos_neg != -1) {
        cout << "Invalid input format" << endl;
        return false;
    }
    return true;
}

// Calculates the total based on the
// prime factorization input
int calculateTotal(int pos_neg) {
    int num, exponent, temp, total = pos_neg;
    char times, raisedTo, symbol;

    // Process the input for multiplication and exponentiation
    while (cin >> times >> num >> raisedTo >> exponent) {
        // Validate the input format; exit if invalid
        if (times != '*' || raisedTo != '^' || exponent <= 0) {
            cout << "Invalid input format" << endl;
            exit(1);
        }

        // Calculate num^exponent
        temp = 1;
        for (int i = 0; i < exponent; ++i) {
            temp *= num;
        }

        // Multiply the current total
        // with the calculated value
        total *= temp;

        // Read the next symbol to check if it is '?'
        cin >> symbol;
        if (symbol == '?') {
            break;
        } else {
            cin.putback(symbol);  // Put the character back if it's not '?'
        }
    }
    return total;
}

// Processes and prints the correct
// prime factorization if the total doesn't match
void processPrimeFactorization(int num) {
    int divisor = 3, exp = 0;

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Factor out all 2's first
    if (num % 2 == 0) {
        while (num % 2 == 0) {
            exp++;
            num /= 2;
        }
        cout << "* 2^" << exp;
    }

    // Factor out the remaining primes starting from 3
    while (num != 1) {
        if (num % divisor == 0) {
            exp = 0;
            while (num % divisor == 0) {
                exp++;
                num /= divisor;
            }
            cout << " * " << divisor << "^" << exp;
        }
        divisor += 2;
    }
    cout << endl;
}



int main() {
    int num, pos_neg;
    char equalSign;

    // Read the first part of the input (integer and equal sign)
    cin >> num >> equalSign;

    // Validate the format of the input; exit if invalid
    if (!validateInput(num, equalSign)) {
        return 1;
    }

    // Read the positive/negative sign and validate it
    cin >> pos_neg;
    if (!validatePosNeg(pos_neg)) {
        return 1;
    }

    // Calculate the total based on the inputs
    // and check if it matches the integer
    int total = calculateTotal(pos_neg);
    if (total == num) {
        cout << "Correct!" << endl;
    } else {
        // If incorrect, display the error and
        // show the correct prime factorization
        cout << "Incorrect. " << num << " = " << pos_neg;
        processPrimeFactorization(num);
    }

    return 0;
}
