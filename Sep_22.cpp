Sep_22: Sep_22.cpp
	g++ Sep_22.cpp -o Sep_22

/*
Notes

Why do we use namespace std;?
    It allows us to use standard library features without prefixing them with std::.

What's the different between a fxn declaration and a fxn definition?
    A function declaration specifies the function's name, return type, and parameters, but does not provide the implementation. 
    A function definition includes the actual implementation of the function.

What is the difference between pass by value and pass by reference? If you want to modify the value passed in by the calling fxn (eg output
argument) which would you use?
    Pass by value creates a copy of the argument, so modifications do not affect the original variable.
    Pass by reference allows the function to modify the original variable.

Why might you not want to return a reference to a local variable from a fxn?
    Returning a reference to a local variable is dangerous because the variable goes out of scope when the function ends, 
    leading to undefined behavior.

What happens if a program execution gets to end of a fxn (other than main) that is meant to return something but there is no return statement?
    If a function that is supposed to return a value reaches the end without a return statement, it results in undefined behavior.
*/

#include <iostream>
using namespace std;

void make_ordered(int &a, int &b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    int a = 1;
    int b = 2;
    make_ordered(a, b);
    cout << a << " " << b << endl; // 1 2

    a = 2;
    b = 1;
    make_ordered(a, b);
    cout << a << " " << b << endl; // 1 2

    return 0;
}
