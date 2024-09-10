// Copyright 2024 bhipp
// tests the LeapYear function in #include<iostream>
#include<iostream>
using std::cout;
using std::endl;
#include "program2functions.h"

int main() {
  if ( !LeapYear(2023) )
    cout << "Passed non-leap year test" << endl;
  else
    cout << "Failed non-leap year test" << endl;

  if ( LeapYear(2024) )
    cout << "Passed 4-year leap year test" << endl;
  else
    cout << "Failed 4-year leap year test" << endl;

  if ( !LeapYear(1900) )
    cout << "Passed 100 year non-leap year test" << endl;
  else
    cout << "Failed 100 year non-leap year test" << endl;

  if ( LeapYear(2000) )
    cout << "Passed 400 year leap year test" << endl;
  else
    cout << "Failed 400 year leap year test" << endl;

  return 0;
}
