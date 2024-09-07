// Copyright 2024 maximusf
// source file with sample tests of functions written on 9/5
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"./sept5.h"
/*
int main() {
	double r1, r2, quad, lin, cons;
	cout << "Enter the coefficients for your quadratic polynomial:\n     x^2\r";
	cin >> quad;
	cout << "    x\r";
	cin >> lin;
	cin >> cons;
	//cout << QuadraticRoot(1, 0, -4, r1, r2) << endl; // x^2 -4 (2, 2, -2)
	//cout << QuadraticRoot(1, -6, 9, r1, r2) << endl; // x^2 -6x +9(1, 3, 0)
	cout << QuadraticRoot(quad, lin, cons, r1, r2) << endl;
	
	//for ex:
	//6x^2 +8x -10
	//2
	//0.7863
	//-2.11963
	
	cout << r1 << " " << r2 << endl;
	return 0;
	
}
*/

int main() {
	int num;
	cout << "Enter a non-negative integer ";
	cin >> num;
	cout << num << "! = " << Factorial(num) << endl;
	// -123! = 1 
	// 0! = 1
	// 3! = 6
	// 4! = 24
	return 0;
}

// to make the output go to a file
// for ex: ./driver > myoutput.txt
// that will make the output of the driver go to a new file called myoutput.txt

// if you want to read something:
/*
	./driver > myoutput.txt < myinput.txt
	// you will just need to type into myinput.txt, 
	// then, driver.cc will run with myinput.txt as input
	// then, myoutput.txt will be what the driver returns
*/
