// Copyright 2024 bhipp
// Initial constructor, mutator, and accessor tests for the Height class
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"height.h"

int main() {
  Height h1;
  if ( h1.GetValue() != 0 || h1.GetUnits() != "feet" )
    cout << "Failed default constructor / accessor function test.";
  else
    cout << "Passed default constructor / accessor function test.";
  cout << endl;

  const Height h2(3);
  if ( h2.GetValue() != 3 || h2.GetUnits() != "feet" )
    cout << "Failed constructor one good argument / accessor function test.";
  else
    cout << "Passed constructor one good argument / accessor function test.";
  cout << endl;

  Height h3(-7);
  if ( h3.GetValue() != 0 || h3.GetUnits() != "feet" )
    cout << "Failed constructor one bad argument / accessor function test.";
  else
    cout << "Passed constructor one bad argument / accessor function test.";
  cout << endl;

  Height h4(25, "meters");
  if ( h4.GetValue() != 25 || h4.GetUnits() != "meters" )
    cout << "Failed constructor two good arguments / accessor function test.";
  else
    cout << "Passed constructor two good arguments / accessor function test.";
  cout << endl;

  Height h5(100, "giants");
  if ( h5.GetValue() != 100 || h5.GetUnits() != "feet" )
    cout << "Failed constructor bad units / accessor function test.";
  else
    cout << "Passed constructor bad units / accessor function test.";
  cout << endl;

  Height h6;
  string initial_units = h6.GetUnits();
  h6.SetValue(148.9);
  if ( h6.GetValue() != 148.9 || h6.GetUnits() != initial_units )
    cout << "Failed SetValue with valid argument test.";
  else
    cout << "Passed SetValue with valid argument test.";
  cout << endl;

  Height h7;
  initial_units = h7.GetUnits();
  double initial_value = h7.GetValue();
  h7.SetValue(-75);
  if ( h7.GetValue() != initial_value || h7.GetUnits() != initial_units )
    cout << "Failed SetValue with invalid argument test.";
  else
    cout << "Passed SetValue with invalid argument test.";
  cout << endl;

  Height h8;
  initial_units = h8.GetUnits();
  initial_value = h8.GetValue();
  h8.SetUnits("inches");
  if ( h8.GetValue() != initial_value || h8.GetUnits() != "inches" )
    cout << "Failed SetUnits with valid argument test.";
  else
    cout << "Passed SetUnits with valid argument test.";
  cout << endl;

  Height h9;
  initial_units = h9.GetUnits();
  initial_value = h9.GetValue();
  h9.SetUnits("#%$@!");
  if ( h9.GetValue() != initial_value || h9.GetUnits() != initial_units )
    cout << "Failed SetUnits with invalid argument test.";
  else
    cout << "Passed SetUnits with invalid argument test.";
  cout << endl;
  return 0;
}

