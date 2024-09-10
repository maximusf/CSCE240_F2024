// Copyright 2024 bhipp
// runs sample tests for PreviousDate function
#include<iostream>
using std::cout;
using std::endl;
#include "program2functions.h"

int main() {
  int month = 1, day = 3, year = 2023;
  PreviousDate(month, day, year);
  if ( month == 1 && day == 2 && year == 2023 )
    cout << "Passed 1/3/2023 to 1/2/2023 test" << endl;
  else
    cout << "Failed 1/3/2023 to 1/2/2023  test" << endl;

  month = 3;
  day = 1;
  year = 2023;
  PreviousDate(month, day, year);
  if ( month == 2 && day == 28 && year == 2023 )
    cout << "Passed 3/1/2023 to 2/28/2023 test" << endl;
  else
    cout << "Failed 3/1/2023 to 2/28/2023 test" << endl;

  month = 1;
  day = 1;
  year = 2023;
  PreviousDate(month, day, year);
  if ( month == 12 && day == 31 && year == 2022 )
    cout << "Passed 1/1/2023 to 12/31/2022 test" << endl;
  else
    cout << "Failed 1/1/2023 to 12/31/2022 test" << endl;

  month = 2;
  day = 29;
  year = 2025;
  PreviousDate(month, day, year);
  if ( month == 2 && day == 29 && year == 2025 )
    cout << "Passed 2/29/2025 unchanged (because invalid date) test" << endl;
  else
    cout << "Failed 2/29/2025 unchanged (because invalid date) test" << endl;

  return 0;
}
