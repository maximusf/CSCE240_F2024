// Copyright 2024 bhipp
// Implement the member functions in the Temperature class
#include"temperature.h"
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;

// implementation for the stream insertion operator, which is a friend
// of our Temperature class
ostream& operator << (ostream& whereto, const Temperature& t) {
cout << t.value_;
  if ( Temperature::display_units_as_word_ )
    cout  << " degrees " << t.unit_ << endl;
  else
    cout << "\u00B0 " << t.unit_[0] << endl;
  return whereto; // returning whereto allows cascading of operations
                  // i.e. cout << t << " " << t2 << endl;
                  // is like cout << t; cout << " " << t2 << endl;


}


// initialize static members on the class
bool Temperature::display_units_as_word_ = false;

void Temperature::SetDisplayAsWord(bool b) {
  display_units_as_word_ = b;
  // static member functions can only access static members
}

bool Temperature::operator <(const Temperature& right) const {
  Temperature temp = *this;
  temp.Convert(right.unit_);
  return temp.value_ < right.value_;
}


void Temperature::Convert(string new_unit) {
  if ( new_unit == unit_ || (new_unit != "Celsius" &&
                              new_unit != "Fahrenheit" &&
                              new_unit != "Kelvin") )
    return;
  if ( unit_ == "Celsius" && new_unit == "Kelvin" )
    value_ += 273.15;
  else if ( unit_ == "Celsius" && new_unit == "Fahrenheit" )
    value_ = 9 / 5.0 * value_  + 32;
  else if ( unit_ == "Fahrenheit" && new_unit == "Celsius" )
    value_ = 5 / 9.0 * (value_ - 32);
  else if ( unit_ == "Fahrenheit" && new_unit == "Kelvin" )
    value_ = 5 / 9.0 * (value_ - 32) + 273.1;
  else if ( unit_ == "Kelvin" && new_unit == "Celsius" )
    value_ -= 273.15;
  else
    value_ = 9 / 5.0 * (value_ - 273.15) + 32;
  unit_ = new_unit;
}


Temperature& Temperature::SetUnit(string unit) {
  if ( unit == "Celsius" || unit == "Fahrenheit" || unit == "Kelvin" )
    unit_ = unit;
//  return unit == unit_;
  return *this;  // obj.SetUnit("Celsius").Print();
}

// I haven't thought of any restrictions for the value... but if I do
// in the future, having this set function will save all programmers
// who've used this class the headache of having to change their code
// for modifying value
bool Temperature::SetValue(double value) {
  this->value_ = value;
  return value_ == value;
}


// if we define a member function outside of the class definition
// we must tie it to the class with the scope resolution operator
Temperature::Temperature(double value, string unit) {
  value_ = 70;
  unit_ = "Fahrenheit";
  SetValue(value);
  SetUnit(unit);
}

void Temperature::Print() const {
  cout << value_;
  if ( display_units_as_word_ )
    cout  << " degrees " << unit_ << endl;
  else
    cout << "\u00B0 " << unit_[0] << endl;
}
