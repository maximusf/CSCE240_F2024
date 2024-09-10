// Copyright 2024 bhipp
// runs sample tests for NextDate function
#include<iostream>
using std::cout;
using std::endl;
#include "program2functions.h"

int main() {
  int month = 1, day = 3, year = 2023;
  NextDate(month, day, year);
  if ( month == 1 && day == 4 && year == 2023 )
    cout << "Passed 1/3/2023 to 1/4/2023 test" << endl;
  else
    cout << "Failed 1/3/2023 to 1/4/2023  test" << endl;

  month = 1;
  day = 31;
  year = 2023;
  NextDate(month, day, year);
  if ( month == 2 && day == 1 && year == 2023 )
    cout << "Passed 1/31/2023 to 2/2/2023 test" << endl;
  else
    cout << "Failed 1/31/2023 to 2/2/2023 test" << endl;

  month = 12;
  day = 31;
  year = 2023;
  NextDate(month, day, year);
  if ( month == 1 && day == 1 && year == 2024 )
    cout << "Passed 12/31/2023 to 1/1/2024 test" << endl;
  else
    cout << "Failed 12/31/2023 to 1/1/2024 test" << endl;

  month = 2;
  day = 28;
  year = 2024;
  NextDate(month, day, year);
  if ( month == 2 && day == 29 && year == 2024 )
    cout << "Passed 2/28/2024 to 2/29/2024 test" << endl;
  else
    cout << "Failed 2/28/2024 to 2/29/2024 test" << endl;

  month = 6;
  day = 31;
  year = 2023;
  NextDate(month, day, year);
  if ( month == 6 && day == 31 && year == 2023 )
    cout << "Passed 6/31/2023 unchanged (because invalid date) test" << endl;
  else
    cout << "Failed 6/31/2023 unchanged (because invalid date) test" << endl;

  return 0;
}
