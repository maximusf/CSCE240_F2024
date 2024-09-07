// Copyright 2024 maximusf
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
	int classes;
	cout << "hi, how many classes are you taking?" << endl;
	cin >> classes;
	if ( classes > 6 )
		cout << "That's a LOT!" << endl;
	else
		cout << "Good for you" << endl;
	
	cout << classes << " is " << (classes > 6 ? "A LOT" : "a good number")
		 << " of classes!" << endl;
	
	cout << "You have ";
	int class_count = 1;
	while ( class_count <= classes ){
		cout << class_count++ << " ";
		//++class_count;
	}
	cout << "classes" << endl;
	
	cout << "I said, you have ";
	for ( int i = 1; i <= classes; ++i )
		cout << i << " ";
	cout << "classes" << endl;


	cout << "At the end, class_count = " << class_count << endl;
	// cout << "At the end, i = " << i << endl;
	
	return 0;
}
