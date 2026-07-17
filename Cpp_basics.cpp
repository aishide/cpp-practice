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

int x = 10;
int y = 3;

cout << (x + y) << "\n"; // 13
cout << (x - y) << "\n"; // 7
cout << (x * y) << "\n"; // 30
cout << (x / y) << "\n"; // 3 (integer division)
cout << (x % y) << "\n"; // 1

int z = 5;
++z;
cout << z << "\n"; // 6
--z;
cout << z << "\n"; // 5




int x = 10;
int y = 3;
cout << (x / y) << "\n";   // Integer division, result is 3

double a = 10.0;
double b = 3.0;
cout << (a / b) << "\n";   // Decimal division, result is 3.333...




Precedencec rule  : 
() - Parentheses
*, /, % - Multiplication, Division, Modulus
+, -   - Addition, Subtraction
>, <, >=, <= - Comparison
==, != - Equality
&& - Logical AND
|| - Logical OR
= - Assignment




A string variable contains a collection of characters surrounded by double quotes (""):
example : 

// Include the string library
#include <string>

string greeting = "Hello and welcome!";
cout << greeting;



string concatination  : 
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName;



string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName;


int x = 10;
int y = 20;
int z = x + y;      // z will be 30 (an integer)

string x = "10";
string y = "20";
string z = x + y;   // z will be 1020 (a string)

Error case : 
string x = "10";
int y = 20;
string z = x + y;



String Length :- 

#include <iostream>
using namespace std;

int main() {
    
    string name = "Aishi";
    cout << "The name is : " << name << " And the string length is : " << name.length();

    return 0;
}

size()  is alias of length() function. Both can be used to get the length of a string.


Access Strings :- 

#include <iostream>
using namespace std;

int main() {
    
    string name = "Aishi";
    cout << "The first letter in the name - " << name << "  is : " << name[0] << "\n";
    cout << "The second letter is - " << name[1] << endl;
    cout << "The Fifth letter is - " << name[4] << endl;

// place = n -1 

    return 0;
}


To print last character : 

string myString = "Hello";
cout << myString[myString.length() - 1];
// Outputs o

Change characters in a string :-

#include <iostream>
using namespace std;

int main() {
    
    string name = "Aishi";
    cout << "Original name : " << name << endl;
    name[2] = 'c';
    cout << "The new name is - " << name << endl;

    return 0;
}

Use of at() : 
// For this we need to include the string library

#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  cout << "Original string: " << myString << "\n";
  
  cout << "First character: " << myString.at(0) << "\n";
  cout << "Second character: " << myString.at(1) << "\n";
  cout << "Last character: " << myString.at(myString.length() - 1) << "\n";
  
  myString.at(0) = 'J';
  cout << "Changed string: " << myString;
  return 0;
}


Special characters in string :
string txt = "We are the so-called \"Vikings\" from the north.";


getline() function : 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    string fullname , fullname1;
    
    //Wont get a full name as it has space 
    cout << "Write your full name : ";
    cin >> fullname;
    cout << "Your full name is  : " << fullname << endl;

    
    cin.ignore();
    //To get a full name with space 
    cout << "Write your full name : ";
    getline(cin , fullname1);
    cout << "The full name now after getline() function is : " <<fullname1 << endl;

    return 0;
}


omitting namespace std : 
#include <iostream>
#include <string>
// using namespace std; - Remove this line

int main() {
  std::string greeting = "Hello";
  std::cout << greeting;
  return 0;
}



cpp maths  :

cout << max(5, 10);
cout << min(5, 10);

Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file:

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Square root of 64 is: " << sqrt(64) << "\n";
  cout << "Round 2.6 to the nearest integer: " << round(2.6) << "\n";
  cout << "The natural logarithm of 2 is: " <<log(2) << "\n";
  return 0;
}
