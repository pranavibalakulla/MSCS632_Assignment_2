// C++: demonstrating a static, strong type system
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
    int x = 10;                 // type fixed at compile time
    cout << "x is " << x << " (declared as int)" << endl;

    // x = "hello";  // This line would NOT compile: cannot assign a string to an int.
    // The type of a variable in C++ is fixed when it is declared.

    string message = "The total is ";
    int value = 5;
    // message + value would fail to compile; we must convert explicitly.
    string result = message + to_string(value);
    cout << result << endl;

    double d = 9.7;
    int truncated = d;          // implicit narrowing: value becomes 9
    cout << "double 9.7 stored in an int becomes " << truncated << endl;
    return 0;
}
