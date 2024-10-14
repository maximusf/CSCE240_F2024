// Copyright 2024 bhipp
// Initial constructor and accessor tests for the HeightRange class
#include<iostream>
using std::cout;
using std::endl;
#include"heightrange.h"
#include"height.h"

int main() {
  HeightRange range1;
  if ( range1.Width().GetValue() == 0 &&
       range1.Width().GetUnits() == "feet" )
    cout << "Passed Width test 1" << endl;
  else
    cout << "Failed Width test 1" << endl;

  HeightRange range2(Height(6, "inches"), Height(1, "pounds"));
  if ( range2.Width().GetValue() == 0.5 &&
       range2.Width().GetUnits() == "feet" )
    cout << "Passed Width test 2" << endl;
  else
    cout << "Failed Width test 2" << endl;

  HeightRange range3(Height(1, "meters"), Height(162, "centimeters"));
  if ( range3.Width().GetValue() == 62 &&
       range3.Width().GetUnits() == "centimeters" )
    cout << "Passed Width test 3" << endl;
  else
    cout << "Failed Width test 3" << endl;

  return 0;
}
