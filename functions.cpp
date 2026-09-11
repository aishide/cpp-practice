//Function 
// A function is a block of code which only runs when it is called.
// You can pass data, known as parameters, into a function.

// C++ provides some pre-defined functions, such as main(), which is used to execute code. 

Syntax : 
void myFunction() {
  // write the code you want here 
}

void = means that the function does not have a return value. 

  // Create a function
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"




..

// We can call it multiple times too!

void myFunction() {
  cout << "I just got executed!\n";
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

// I just got executed!
// I just got executed!
// I just got executed!




// Paarameters 

void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}





//Name function 

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes






int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);

  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
