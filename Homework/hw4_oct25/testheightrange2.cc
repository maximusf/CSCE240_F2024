// Copyright 2024 bhipp
// Initial constructor and accessor tests for the HeightRange class
#include<iostream>
using std::cout;
using std::endl;
#include"heightrange.h"
#include"height.h"

int main() {
  HeightRange range1;
  range1.SetTallest(Height(7, "inches"));
  if ( range1.GetShortest().GetValue() == 0 &&
       range1.GetShortest().GetUnits() == "feet" &&
       range1.GetTallest().GetValue() == 7 &&
       range1.GetTallest().GetUnits() == "inches" )
    cout << "Passed good SetTallest test" << endl;
  else
    cout << "Failed good SetTallest test" << endl;

  HeightRange range2(Height(8, "inches"), Height(1, "feet"));
  range2.SetShortest(Height(4, "centimeters"));
  if ( range2.GetShortest().GetValue() == 4 &&
       range2.GetShortest().GetUnits() == "centimeters" &&
       range2.GetTallest().GetValue() == 1 &&
       range2.GetTallest().GetUnits() == "feet" )
    cout << "Passed good SetShortest test" << endl;
  else
    cout << "Failed good SetShortest test" << endl;

  HeightRange range3(Height(8, "meters"), Height(10, "centimeters"));
  range3.SetTallest(Height(7, "centimeters"));
  if ( range3.GetShortest().GetValue() == 10 &&
       range3.GetShortest().GetUnits() == "centimeters" &&
       range3.GetTallest().GetValue() == 8 &&
       range3.GetTallest().GetUnits() == "meters" )
    cout << "Passed bad SetTallest test" << endl;
  else
    cout << "Failed bad SetTallest test" << endl;

  HeightRange range4(Height(2, "meters"), Height(5, "feet"));
  range4.SetShortest(Height(80, "inches"));
  if ( range4.GetShortest().GetValue() == 5 &&
       range4.GetShortest().GetUnits() == "feet" &&
       range4.GetTallest().GetValue() == 2 &&
       range4.GetTallest().GetUnits() == "meters" )
    cout << "Passed bad SetShortest test" << endl;
  else
    cout << "Failed bad SetShortest test" << endl;
  return 0;
}
