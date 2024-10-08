// Copyright 2024 maximusf
// Define a Temperature class

#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

#include<string>
using std::string;

class Temperature {
    // Google style - all function, data member indented two spaces in block

 public:
 // constructor - same name as class, no return type. called when an object is declared
 // default constructor - constructor that can be called with no arguments
 // If your constructor can be called with exactly one argument, mark it as explicit if ( value == "Celsius" || value == "Fahrenheit" || value == "Kelvin")
 // makes it so that values of that one argument type won't be implicitly cast as an object of our class, calling that constructor
    explicit Temperature(double value = 72, string unit = "Fahrenheit" );
    void Print() const; // if a function shouldn't modify the object it's called on, make it a constant member function

    // accessors / get functions - returns a copy of the value of a private data member
    int GetValue() const { return value_; }
    string GetUnit() const { return unit_; }

    // mutators / set functions - allow modification of private data member
    //                            keep in a consistent state
    bool SetValue(double value);
    bool SetUnit(string unit);


 private: // Google style - one space for public/protected/private
  double value_; // Google style - trailing underscore on private
  // composition = using objects of one class as data members in another class. unit_ is a string object
  string unit_; // data member names
        
};

#endif