// Copyright 2024 bhipp
// Initial CovertUnits tests for the Height class
#include<iostream>
using std::cout;
using std::endl;
#include"height.h"

int main() {
  Height h1(2, "feet");
  h1.ConvertUnits("inches");
  if ( h1.GetValue() != 12 || h1.GetUnits() != "inches" )
    cout << "Failed convert 2 feet to inches test. Value = " << h1.GetValue()
         << " (expected 12). Units = " << h1.GetUnits() << " (expected inches)"
         << endl;
  else
    cout << "Passed convert 2 feet to inches test.";
  cout << endl;

  Height h2(6, "inches");
  h2.ConvertUnits("feet");
  if ( h2.GetValue() != 0.5 || h2.GetUnits() != "feet" )
    cout << "Failed convert 6 inches to feet test. Value = " << h2.GetValue()
         << " (expected 0.5). Units = " << h2.GetUnits() << " (expected feet)"
         << endl;
  else
    cout << "Passed convert 6 inches to feet test.";
  cout << endl;

  Height h3(4, "feet");
  h3.ConvertUnits("centimeters");
  double expected = 121.92;
  double errorOk = 0.001;
  if ( h3.GetValue() < expected - errorOk || h3.GetValue() > expected + errorOk
       || h3.GetUnits() != "centimeters" )
    cout << "Failed convert 4 feet to centimeters test. Value = "
         << h3.GetValue() << " (expected " << expected << "). Units = "
         << h3.GetUnits() << " (expected centimeters)" << endl;
  else
    cout << "Passed convert 4 feet to centimeters test.";
  cout << endl;

  Height h4(121.92, "centimeters");
  h4.ConvertUnits("feet");
  expected = 4;
  if ( h4.GetValue() < expected - errorOk || h4.GetValue() > expected + errorOk
       || h4.GetUnits() != "feet" )
    cout << "Failed convert 121.92 centimeters to feet test. Value = "
         << h4.GetValue() << " (expected " << expected << "). Units = "
         << h4.GetUnits() << " (expected feet)" << endl;
  else
    cout << "Passed convert 121.92 centimeters to feet test.";
  cout << endl;

  Height h5(50, "feet");
  h5.ConvertUnits("meters");
  expected = 15.24;
  if ( h5.GetValue() < expected - errorOk || h5.GetValue() > expected + errorOk
       || h5.GetUnits() != "meters" )
    cout << "Failed convert 50 feet to meters test. Value = " << h5.GetValue()
         << " (expected " << expected << "). Units = " << h5.GetUnits()
         << " (expected meters)" << endl;
  else
    cout << "Passed convert 50 feet to meters test.";
  cout << endl;

  Height h6(15.24, "meters");
  h6.ConvertUnits("feet");
  expected = 50;
  if ( h6.GetValue() < expected - errorOk || h6.GetValue() > expected + errorOk
       || h6.GetUnits() != "feet" )
    cout << "Failed convert 15.24 meters to feet test. Value = "
         << h6.GetValue() << " (expected " << expected << "). Units = "
         << h6.GetUnits() << " (expected feet)" << endl;
  else
    cout << "Passed convert 15.24 meters to feet test.";
  cout << endl;

  Height h7(10, "meters");
  h7.ConvertUnits("inches");
  expected = 393.701;
  if ( h7.GetValue() < expected - errorOk || h7.GetValue() > expected + errorOk
       || h7.GetUnits() != "inches" )
    cout << "Failed convert 10 meters to inches test. Value = "
         << h7.GetValue() << " (expected " << expected << "). Units = "
         << h7.GetUnits() << " (expected inches)" << endl;
  else
    cout << "Passed convert 10 meters to inches test.";
  cout << endl;

  Height h8(393.701, "inches");
  h8.ConvertUnits("meters");
  expected = 10;
  if ( h8.GetValue() < expected - errorOk || h8.GetValue() > expected + errorOk
       || h8.GetUnits() != "meters" )
    cout << "Failed convert 393.701 inches to meters test. Value = "
         << h8.GetValue() << " (expected " << expected << "). Units = "
         << h8.GetUnits() << " (expected meters)" << endl;
  else
    cout << "Passed convert 393.701 inches to meters test.";
  cout << endl;

  Height h9(100, "centimeters");
  h9.ConvertUnits("inches");
  expected = 39.3701;
  if ( h9.GetValue() < expected - errorOk || h9.GetValue() > expected + errorOk
       || h9.GetUnits() != "inches" )
    cout << "Failed convert 100 centimeters to inches test. Value = "
         << h9.GetValue() << " (expected " << expected << "). Units = "
         << h9.GetUnits() << " (expected inches)" << endl;
  else
    cout << "Passed convert 100 centimeters to inches test.";
  cout << endl;

  Height h10(39.3701, "inches");
  h10.ConvertUnits("centimeters");
  expected = 100;
  if ( h10.GetValue() < expected - errorOk
       || h10.GetValue() > expected + errorOk
       || h10.GetUnits() != "centimeters" )
    cout << "Failed convert 39.3701 inches to centimeters test. Value = "
         << h10.GetValue() << " (expected " << expected << "). Units = "
         << h10.GetUnits() << " (expected centimeters)" << endl;
  else
    cout << "Passed convert 39.3701 inches to centimeters test.";
  cout << endl;

  Height h11(1.3, "meters");
  h11.ConvertUnits("centimeters");
  expected = 130;
  if ( h11.GetValue() < expected - errorOk
       || h11.GetValue() > expected + errorOk
       || h11.GetUnits() != "centimeters" )
    cout << "Failed convert 1.3 meters to centimeters test. Value = "
         << h11.GetValue() << " (expected " << expected << "). Units = "
         << h11.GetUnits() << " (expected centimeters)" << endl;
  else
    cout << "Passed convert 1.3 meters to centimeters test.";
  cout << endl;

  Height h12(275, "centimeters");
  h12.ConvertUnits("meters");
  expected = 2.75;
  if ( h12.GetValue() < expected - errorOk
       || h12.GetValue() > expected + errorOk
       || h12.GetUnits() != "meters" )
    cout << "Failed convert 275 centimeters to meters test. Value = "
         << h12.GetValue() << " (expected " << expected << "). Units = "
         << h12.GetUnits() << " (expected meters)" << endl;
  else
    cout << "Passed convert 275 centimeters to meters test.";
  cout << endl;

  Height h13(275, "centimeters");
  h13.ConvertUnits("centimeters");
  if ( h13.GetValue() != 275 || h13.GetUnits() != "centimeters" )
    cout << "Failed convert to bad units test." << endl;
  else
    cout << "Passed convert to bad units test." << endl;
  cout << endl;
  return 0;
}

