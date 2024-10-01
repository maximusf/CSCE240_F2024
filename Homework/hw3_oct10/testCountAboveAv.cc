// Copyright 2024 bhipp
// Initial sample tests for the CountAboveAv functon written for
// CSCE240 Programming Assignment 3
#include<iostream>
using std::cout;
using std::endl;
#include"program3functions.h"
#include"checkArraysMatch.h"

int main() {
  const int kRows = 4;
  const double x[kRows][10] =
                        {{1.2, 8.7, 4.1, 6.7, 7.1, 0.7, 0.3, 9.4, 6.4, 5.2},
                         {2.9, 2.4, 2.3, 2.1, 1.9, 3.4, 0.6, 1.8, 1.7, 2.2},
                         {5.7, 8.7, 2.3, 7.2, 3.3, 2.1, 1.6, 4.4, 5.5, 6.6},
                         {0.5, 3.5, 4.1, 1.6, 2.5, 3.9, 0.5, 1.8, 5.6, 5.2}};
  int student_answer = CountAboveAv(x, 4);
  if ( student_answer == 17 )
    cout << "Passed example test CountAboveAv(x, 4) == 17" << endl;
  else
    cout << "Failed example test CountAboveAv(x, 4) returned "
         << student_answer << ", expected 17" << endl;
  return 0;
}
