// Copyright 2024 maximusf
# include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include"temperature.h"

bool IsItFreezing( Temperature t ) {
    if ( t.GetUnit() == "Celsius" && t.GetValue() == 0 )
        return true;
    if ( t.GetUnit() == "Fahrenheit" && t.GetValue() == 32 )
        return true;
    if ( t.GetUnit() == "Kelvin" && t.GetValue() == 273.15 )
        return true;   
    return false;
}


int main() {
    Temperature t; // instantiate a Temperature object
    t.Print();
    t.SetValue(82);
    t.SetUnit("flowers");
    t.Print();
    const Temperature kFreezing(0, "Celsius");
    kFreezing.Print();

    cout << (IsItFreezing(Temperature(9.5)) ? "brrrrrr" : "meh") << endl;

    return 0;
}