// Copyright 2024 bhipp
// Initial output tests for the Height class
#include<fstream>
using std::ofstream;
using std::ifstream;
#include<iostream>
using std::cout;
using std::endl;
#include<cstring>
#include"height.h"

int main() {
  ofstream sout;
  sout.open("studentoutput.txt");
  Height h1, h2(2, "inches"), h3(9, "centimeters");
  const Height kEiffelTower(312.1, "meters");
  sout << "h1 = " << h1 << "\nh2 = " << h2 << "\nh3 = " << h3
       << "\nkEiffelTower = " << kEiffelTower << endl;
  sout.close();
  ifstream sin("studentoutput.txt");
  char next_line[100] = "";
  const char * correct_lines[4] = {"h1 = 0 feet", "h2 = 2 inches",
                                   "h3 = 9 centimeters",
                                   "kEiffelTower = 312.1 meters"};

  for ( int i = 0; i < 4; ++i ) {
    if ( sin.good() )
      sin.getline(next_line, 100);
    if ( sin.good() ) {
      if ( strncmp(next_line, correct_lines[i], 100) == 0 ) {
        cout << "student line " << (i + 1) << " is correct!" << endl;
      } else {
        cout << "student line " << (i + 1) << ": " << next_line
             << "\ncorrect line " << (i + 1) << ": " << correct_lines[i]
             << endl;
      }
    } else {
      cout << "student line missing\ncorrect line: " << correct_lines[i]
           << endl;
    }
  }
  return 0;
}

