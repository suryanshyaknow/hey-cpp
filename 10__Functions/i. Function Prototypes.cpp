#include <iostream>
using namespace std;


// ########################### FUNCTION PROTOTYPES #################################
/*
Should we declare our function before the `main()`, we've gotta atleast inform the compiler of the same.
Otherwise we'll get error: 'function_name' was not declared in this scope. The way by which we do that is
called "function prototyping".

Trivia: Firstly, this concept was introduced in C++ then was adapted into C too.
*/

// float add(float a, float b); // Acceptable
// float add(a, b);             // Not Acceptable
float add(float, float);
int multiply(int, int);

int main()
{
    float num1, num2;
    cout << "Enter two integers: " << endl;
    cin >> num1 >> num2;
    cout << "Sum: " << add(num1, num2) << endl; // `num1` and `num2` here are the "Actual" parameters

    return 0;
}

float add(float a, float b) // `a` and `b` are "Formal" parameters, and will take vals from the actual ones
{
    // Function definition for add()
    return a + b;
}

int multiply(int a, int b)
{
    // Function definition for multiply()
    return a * b;
}