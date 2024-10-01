// Copyright 2024 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include<fstream>
using std::ifstream;
#include<cstring>

int main(int argc, char * argv[] ) {
  if ( argc != 2 ) {
    cout << "Must be run with the name of a file to check" << endl;
    return 2;
  }
  ifstream student(argv[1]);
  const char * ok[6] = {"#include<iostream>", "#include<iomanip>",
                        "#include<cmath>", "#include\"checkArraysMatch.h\"",
                        "#include\"program3functions.h\"",
                        "#include\"./program3functions.h\""};
  char student_include[35] = "", line[101] = "";
  char next_char;
  while ( student.good() ) {
    student >> next_char;
    if ( next_char == '/' ) {
      student >> next_char;
      if ( next_char == '/' ) {
        student.getline(line, 100);
      }
      if ( next_char == '*' ) {
        char prev;
        student >> next_char;
        do {
          prev = next_char;
          student >> next_char;
        } while ( !(prev == '*' && next_char == '/'));
      }
    }
    if ( next_char == '#' ) {
      int i = 0, quotes = 0;
			bool header_guard = false;
      while ( next_char != '>' && student.good() && i < 33 && quotes < 2 ) {
        student_include[i++] = next_char;
        student >> next_char;
				if ( next_char == '\"' ) ++quotes;
				header_guard = ( strncmp(student_include, "#ifndef", 7) == 0 ||
                         strncmp(student_include, "#define", 7) == 0 ||
                          strncmp(student_include, "#endif", 6) == 0 );
      }
			if ( !header_guard ) {
        student_include[i++] = next_char;
        student_include[i] = '\0';
        int matches1 = 1, j = 0;
        while ( matches1 != 0 && j < 6 )
          matches1 = strcmp(student_include, ok[j++]);
        if ( matches1 != 0 ) {
          cout << "Unallowed include: " << student_include
               << "\nStudent grade = 0." << endl;
          return 1;  // exit the program, the code fails
        }
      }
    }
  }
  cout << "automated test found no unallowed includes." << endl;
  return 0;
}
