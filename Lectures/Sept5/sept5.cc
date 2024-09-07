// Copyright 2024 maximusf
// source file with implementations of functions listed in sept5.h
#include"./sept5.h"
#include<cmath> // contains the sqrt(double); function

int QuadraticRoot ( double a, double b, double c, double& root1, double& root2) {
	//-b 
	
	// (b^2 - 4ac)
	// discriminant = disc
	double disc = b * b - 4 * a * c;
	if ( disc < 0 )
		return 0;
		
	root1 = (-1 * b + sqrt(disc)) / (2 * a);
	if ( disc == 0 )
		return 1;
	root2 = (-1 * b - sqrt(disc)) / (2 * a);
	return 2;	
}

int Factorial (int n) {
	/*
	base case: 0! = 1
	inductive step: n! = n*(n-1)!, for n >= 1
	*/
	
	/*
	if ( n <= 0 )
		return 1;
	else
		return n * Factorial(n - 1); // recursion, calling the same function
	*/
	
	
	// using recursion is not very good resource-wise
	// usually you can remove the recursion but 
	// it may be harder to do
	// this is the same as above
	int answer = 1;
	for ( int i = 1; i <= n; ++i )
		answer *= i;
	return answer;
}

// The Fibonacci Series
/*
base cases: Fib(0) = 1, Fib(1) = 1
inductive step: Fib(n) = Fib(n-1) + Fib(n-2), for n >= 2
*/
