// Copyright 2024 maximusf
// CSCE240 Programming Assignment 4
// Due Oct 25, 2024
// height.h

#ifndef HEIGHT_H
#define HEIGHT_H

#include <iostream>
using std::cout;
using std::endl;

class Height
{
    public:
        Height(double value, string units);
        string GetUnits() const;
        double GetValue() const;
        void ConvertUnits(string units);
    private:
        double value_;
        string units_;
};

#endif