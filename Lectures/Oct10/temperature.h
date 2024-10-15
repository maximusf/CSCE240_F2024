// Copyright 2024 bhipp
// Define a Temperature class
#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::ostream;

class Temperature {
  friend ostream& operator << (ostream&, const Temperature&);


  // Google Style - all function, data member indented two spaces in block
 public:
  // constructor - same name as class, no return type, called when
  //               an object is declared
  // default constructor - constructor that can be called with
  //                       no arguments
  // If your constructor can be called with exactly one argument
  // mark it as explicit
  // makes it so that values of that one argument type won't be
  // implicitly cast as an object of our class, calling that constructor
  explicit Temperature(double value = 72, string unit = "Fahrenheit");

  // destructor
  // ~Temperature() { cout << "destructor called for"; Print(); }
  void Print() const;  // if a function shouldn't modify the object it's
                       // called on, make it a constant member function
  // accessor / set function - returns a copy of the value of a private
  // data member
  // accessors are typically one-liners implemented in the header file
  int GetValue() const { return value_; }
  string GetUnit() const { return unit_; }

  // in order for an operator to be a member of the class, its left or
  // only operand must be an object of the class
  // overload the < operator
  bool operator < (const Temperature& right) const;

  // mutator / set function - allow modification of private data member
  //                          keep in a consistent state
  bool SetValue(double value);

  // SetUnit will return a reference to the object it was called on
  Temperature& SetUnit(string unit);

  // convert from the current temperature unit to another - modifying the
  // object
  void Convert(string new_unit);

  // static functions can be called on the class
  static void SetDisplayAsWord(bool);

 private:  // Google style - one space for public/protected/private
  double value_;  // Google style trailing underscore on private
  // composition = using objects of one class as data members in another
  //               class. unit_ is a string object
  string unit_;  // data member names
  static bool display_units_as_word_;
};

#endif
