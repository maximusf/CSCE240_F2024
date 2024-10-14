// Copyright 2024 bhipp
// Initial constructor and accessor tests for the HeightRange class
#include<iostream>
using std::cout;
using std::endl;
#include"heightrange.h"
#include"height.h"

int main() {
  HeightRange range1;
  if ( range1.GetShortest().GetValue() == 0 &&
       range1.GetShortest().GetUnits() == "feet" &&
       range1.GetTallest().GetValue() == 0 &&
       range1.GetTallest().GetUnits() == "feet" )
    cout << "Passed default constructor test" << endl;
  else
    cout << "Failed default constructor test" << endl;

  HeightRange range2(Height(8, "inches"), Height(1, "feet"));
  if ( range2.GetShortest().GetValue() == 8 &&
       range2.GetShortest().GetUnits() == "inches" &&
       range2.GetTallest().GetValue() == 1 &&
       range2.GetTallest().GetUnits() == "feet" )
    cout << "Passed ascending two Height argument constructor test" << endl;
  else
    cout << "Failed ascending two Height argument constructor test" << endl;

  HeightRange range3(Height(8, "meters"), Height(10, "centimeters"));
  if ( range3.GetShortest().GetValue() == 10 &&
       range3.GetShortest().GetUnits() == "centimeters" &&
       range3.GetTallest().GetValue() == 8 &&
       range3.GetTallest().GetUnits() == "meters" )
    cout << "Passed descending two Height argument constructor test" << endl;
  else
    cout << "Failed descending two Height argument constructor test" << endl;

  HeightRange range4(Height(2, "meters"), Height(7, "feet"));
  if ( range4.GetShortest().GetValue() == 2 &&
       range4.GetShortest().GetUnits() == "meters" &&
       range4.GetTallest().GetValue() == 7 &&
       range4.GetTallest().GetUnits() == "feet" )
    cout << "Passed ascending two Height argument constructor test 2" << endl;
  else
    cout << "Failed ascending two Height argument constructor test 2" << endl;
  return 0;
}
