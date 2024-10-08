// Copyright 2024 maximusf
// Implement the member functions in the Temperature class
#include"temperature.h"
#include<iostream>
using std::cout;
using std::endl;

bool Temperature::SetUnit(string unit) {
    if ( unit == "Celsius" || unit == "Fahrenheit" || unit == "Kelvin")
        unit_ = unit;
    return unit == unit_;
}
// I haven't thought of any restrictions for the value...
// but if I do, in the future, having this set function will save all programmers 
// who've used this class the headache of having to change their code for modifying value
bool Temperature::SetValue(double value) {
    value_ = value;
    return value == value_;
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
    cout << value_ << " degrees " << unit_ << endl;
}