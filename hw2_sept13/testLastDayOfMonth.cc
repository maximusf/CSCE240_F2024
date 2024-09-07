// Copyright 2024 bhipp
// tests LastDayOfMonth function
#include<iostream>
using std::cout;
using std::endl;
#include "program2functions.h"

int main() {
  if ( LastDayOfMonth(1) == 31 )
    cout << "Passed last day of January test" << endl;
  else
    cout << "Failed last day of January  test" << endl;

  if ( LastDayOfMonth(9) == 30  )
    cout << "Passed last day of September test" << endl;
  else
    cout << "Failed 400 year leap year test" << endl;

  if ( LastDayOfMonth(13) == 0  )
    cout << "Passed bad month test" << endl;
  else
    cout << "Failed bad month test" << endl;

  if ( LastDayOfMonth(2, 2024) == 29  )
    cout << "Passed last day of February leap year test" << endl;
  else
    cout << "Failed last day of February leap year test" << endl;

  if ( LastDayOfMonth(2, 2025) == 28  )
    cout << "Passed last day of February non-leap year test" << endl;
  else
    cout << "Failed last day of February non-leap year test" << endl;

  if ( LastDayOfMonth(2) == 0  )
    cout << "Passed last day of February missing year test" << endl;
  else
    cout << "Failed last day of February missing year test" << endl;

  return 0;
}
