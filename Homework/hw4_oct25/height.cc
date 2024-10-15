// Copyright 2024 maximusf
// CSCE240 Programming Assignment 4
// Due Oct 25, 2024
// height.cc

#include "height.h"


Height::Height(double value, string units) {
    value_ = value;
    units_ = units;
}

void Height::ConvertUnits(string units) {
    units_ = units;
}

double Height::GetValue() const {
    return value_;
}

string Height::GetUnits() const {
    return units_;
}