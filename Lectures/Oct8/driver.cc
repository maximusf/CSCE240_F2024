// Copyright 2024 maximusf
#include"temperature.h"
int main() {
    Temperature t; // instantiate a Temperature object
    t.Print();
    t.SetValue(82);
    t.SetUnit("flowers");
    t.Print();
    const Temperature kFreezing(0, "Celsius");
    kFreezing.Print();
    return 0;
}