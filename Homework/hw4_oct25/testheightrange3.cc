// Copyright 2024 bhipp
// Initial constructor and accessor tests for the HeightRange class
#include<iostream>
using std::cout;
using std::endl;
#include"heightrange.h"
#include"height.h"

int main() {
  HeightRange range1;
  if ( range1.InRange(Height(0, "feet") ) )
    cout << "Passed true, inclusive InRange test" << endl;
  else
    cout << "Failed true, inclusive InRange test" << endl;

  HeightRange range2(Height(6, "inches"), Height(1, "feet"));
  if ( range2.InRange(Height(20, "centimeters") ) )
    cout << "Passed true, inclusive InRange test 2" << endl;
  else
    cout << "Failed true, inclusive InRange test 2" << endl;

  if ( !range2.InRange(Height(0.1, "meters") ) )
    cout << "Passed false, inclusive InRange test" << endl;
  else
    cout << "Failed false, inclusive InRange test" << endl;

  HeightRange range3(Height(8, "meters"), Height(10, "centimeters"));
  if ( range3.InRange(Height(2, "feet"), false) )
    cout << "Passed true, exclusive InRange test" << endl;
  else
    cout << "Failed true, exclusive InRange test" << endl;

  HeightRange range4(Height(2, "meters"), Height(5, "feet"));
  if ( !range4.InRange(Height(4, "feet"), false) )
    cout << "Passed false, exclusive InRange test" << endl;
  else
    cout << "Failed false, exclusive InRange test" << endl;

  if ( !range4.InRange(Height(200, "centimeters"), false) )
    cout << "Passed false, exclusive InRange test 2" << endl;
  else
    cout << "Failed false, exclusive InRange test 2" << endl;
  return 0;
}
