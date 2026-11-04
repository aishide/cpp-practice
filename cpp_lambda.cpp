Lambda Function :
A lambda function is a small, anonymous function you can write directly in your code. It's useful when you need
a quick function without naming it or declaring it separately.


Syntax :
[capture] (parameters) { code };



Example :
Here, message holds a lambda function that prints a message to the screen:-
int main() {
  auto message = []() {
    cout << "Hello World!\n";
  };

  message();
  return 0;
}

Result:
Hello World!



1. LAMBDA WITH PARAMETERS :
#include <iostream>
using namespace std;

int main() {
  auto add = [](int a, int b) {
    return a + b;
  };

  cout << add(3, 4);
  return 0;
}
//The auto keyword automatically deduces a variable's type from its initializer value at compile time, eliminating the need to write out long or complex type names manually.

Result:
7


2. Passing Lambdas to Functions :
pass a lambda function as an argument to another function.
This is useful when you want to tell a function what to do, not just what data to use.

#include <iostream>
#include <functional> // Needed for std::function
using namespace std;

void myFunction(function<void()> func) {
  func();
  func();
}

int main() {
  auto message = []() {
    cout << "Hello World!\n";
  };

  myFunction(message);
  return 0;
}


Result:
Hello World!
Hello World!



3. Using Lambdas in Loops : 

#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 3; i++) {
    auto show = [i]() {
      cout << "Number: " << i << "\n";
    };
    show();
  }
  return 0;
}


Result:
Number: 1
Number: 2
Number: 3



4. Capture Clause []
You can use the [ ] brackets to give a lambda access to variables outside of it.
This is called the capture clause.

Example: 
the lambda captures the variable x by value (a copy):

int main() {
  int x = 10;
  auto show = [x]() {
    cout << x;
  };

  show();
  return 0;
}

Result:
10


5. Capture by Reference
Use the latest value of a variable (not just a copy), you can use [&] to capture it by reference.

  int main() {
  int x = 10;

  auto show = [&x]() {
    cout << x;
  };

  x = 20;  // Change x after the lambda is created

  show();
  return 0;
}


Result:
20


  

  


Regular Functions vs Lambda Functions

a) Use a regular function
   - You plan to reuse the function in multiple places
   - You want to give the function a clear, meaningful name
   - The logic is long or complex
b) Use a lambda function when:
   - You only need the function once
   - The code is short and simple
   - You want to pass a quick function into another function
