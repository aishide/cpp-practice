// AISHI DE 


C++ is used to create computer programs, 
and is one of the most used languages in game development.

C++ was developed as an extension of C

C++ is an object oriented language

C++ is a cross-platform language : 
A cross-platform language is a programming language that lets you write code once and run it on multiple operating systems with little or no changes.

C++ was developed by Bjarne Stroustrup

C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.





DIFFERENCE BETWEEN C and C++ 
C++ supports classes and objects, while C does not.


#include <iostream> is a header file library that lets us work with input and output objects, such as cout. Header files add functionality to C++ programs.

using namespace std means that we can use names for objects and variables from the standard library.

C++ is case-sensitive
every statement end s with a semicolon ;

The statements are executed, one by one, in the same order as they are written




New line :
" \n "
 << endl


Comments in C++ :
//  ->  Single line comment 
/*    */  ->  Multiline comment 


All C++ variables must be identified with unique names.
These unique names are called identifiers.
*Names can contain letters, digits and underscores
*Names must begin with a letter or an underscore (_)
*Names are case-sensitive (myVar and myvar are different variables)
*Names cannot contain whitespaces or special characters like !, #, %, etc.
*Reserved words (like C++ keywords, such as int) cannot be used as names




constant  :
const int minutesPerHour = 60;
(unchangable and read only variable)

const int minutesPerHour = 60;
This however, will not work:

const int minutesPerHour;
minutesPerHour = 60; // error



float vs. double

The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.





Boolean data type is giving output in 1 and 0 

#include <iostream>
using namespace std;

int main() {
  bool isCodingFun = true;
  bool isFishTasty = false;
  cout << isCodingFun << "\n";
  cout << isFishTasty;
  return 0;
}



char example : 

char myGrade = 'B';
cout << myGrade;

char a = 65, b = 66, c = 67;
cout << a;
cout << b;
cout << c;






for using string includ the string library 

// Include the string library
#include <string>

// Create a string variable
string greeting = "Hello";

// Output string value
cout << greeting;






Operators are used to perform operations on variables and values.
