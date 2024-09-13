// Copyright 2024 maximusf
#include<iostream> //preprocessor directive
using std::cout;
using std::endl;


// overloaded b/c there are two different functions with the same name
int blah( int, double, char='c'); 
int blah( double ); // signature is blah(double)
//int blah( int double) // not a valid signature, 
// the compiler wouldn't know whether or not to send it to first or third function (ambiguous)

// signature of main is main()
// prototype of main is int main();

int main() {
    int x = 5, y = 3;
    // x is cast implicitly as a real number (treated only for this operation)
    // using 2.0
    // implicit casting
    cout << x << " / " << 2 << " = " << x / 2.0 << endl;
    x = x/2; // x= 2
    cout << x << endl;

    // Treat the variable as a different type for this instance
    // treats y as a real number
    // using static_cast<type>(variable)
    // explicit casting
    double z = x / static_cast<double>(y); // 2 / 3
    cout << z << endl;

    return 0;
}

// g++ -Wall -std=c++17 sept12.cc