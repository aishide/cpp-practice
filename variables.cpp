// AISHI DE 

Variables are containers for storing data values.

type variableName = value;

int 
double
char 
string 
bool


syntax : 
type variableName = value;




#include <iostream>
using namespace std;

int main() {
    
    int Mynum = 23;
    cout << Mynum << endl;
    Mynum = 78;
    cout << Mynum << "\n\n";
    
    
    
double myFloatNum = 5.99;    
char myLetter = 'D';     
string myText = "Hello";     
bool myBoolean = true; 
    
    
    
    int Age = 21;
    cout << "My age is " << Age << " Years old!";
    
    return 0;
}






#include <iostream>
using namespace std;

int main() {
    
    int x = 34;
    int y = 66;
    int sum = x + y;
    
    cout << "The sum of " << x << " and " << y  << " is " << sum;
    return 0;
}





#include <iostream>
using namespace std;

int main() {
    
    int x = 34 , y = 76 , z = 6;
    int sum = x + y + z;
    
    int w , e , r ;
    w = e = r = 4;
    cout << w << endl;
    cout << e << endl;
    cout << r << endl;
    
    cout << "The sum is " << sum;
    return 0;
}

