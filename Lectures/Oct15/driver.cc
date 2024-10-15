// Copyright 2024 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include"temperature.h"


int main() {
  Temperature t;
  cout << "t = " << t << "!" << endl;
  return 0;
} 


/*
int main() {
  Temperature t(211), t2(100, "Celsius"), t3(300, "Kelvin");
  t.Print();
  t2.Print();
  // can call a static member function on the class
  Temperature::SetDisplayAsWord(true);
  t3.Print();
//  t.SetUnit("Celsius").Print();
  if ( t < t2 ) {  // t.operator <(t2);
    t.Print();
    cout << " is less than ";
    t2.Print();
  }
  // stream insertion operator's left operand is not a Temperature
  // so it CAN'T be a member of our temperature class
  cout << "t = " << t << " and t2 = " << t2 << endl;
  return 0;
}
*/


/*
bool IsItFreezing(Temperature t) {
  if ( t.GetUnit() == "Celsius" && t.GetValue() == 0 )
    return true;
  if ( t.GetUnit() == "Fahrenheit" && t.GetValue() == 32 )
    return true;
  if ( t.GetUnit() == "Kelvin" && t.GetValue() == 273.15 )
    return true;
  return false;
}

int main() {
  Temperature t (100, "Celsius");
  t.Print();
  t.Convert("Fahrenheit");
  t.Print();
  t.Convert("Kelvin");
  t.Print();

  return 0;
}*/


/* static variable in function example

double average(double x) {
  static double sum = 0;
  static int count = 0;
  ++count;
  sum += x;
  return sum / count;
}

int main() {
  cout << average(5) << endl;
  cout << average(10) << endl;
   return 0;
}
*/
