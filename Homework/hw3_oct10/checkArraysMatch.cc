// Copyright 2024 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setiosflags;
#include"checkArraysMatch.h"

bool ArraysMatch(const double array1[][10], const double array2[][10],
                 int rows) {
  bool match = true;
  int i = 0;
  while ( i < rows * 10 && match ) {
    match = array1[0][i] == array2[0][i];
    ++i;
  }
  return match;
}

void Print(const double num[][10], int num_rows) {
  cout << std::setprecision(1);
  cout << setiosflags(std::ios::fixed | std::ios::showpoint);
  cout << "{";
  for ( int i = 0; i < num_rows; ++i ) {
    cout << "{";
    for ( int j = 0; j < 10; ++j )
      cout << num[i][j] << (j < 9 ? ", " : "");
    cout << (i < num_rows - 1 ? "}," : "}}") << endl;
    cout << "     ";
  }
}

