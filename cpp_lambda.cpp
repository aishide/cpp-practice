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
