#include <iostream>
#include <string>
using namespace std;

// ############################## Overloading Template Functions ##################################
/*
* Similar to function overloading, we can also overload template functions, which involves defining multiple
functions with the same name and different sets of template parameters.

* To overload a template function, we can define multiple versions of the function with different template
parameter lists.
*/

void display(string a, string b)
{
    cout << "\nYo, I'm just a conventional function." << endl;
    cout << a + " " + b << endl;
}

// Overloading the above function with a template function...
template <typename T1, typename T2>
void display(T1 a, T2 b)
{
    cout << "\nHey, I'm a template function and as such I can be dynamic in accepting the datatypes of arguments passed!" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    display("Suryansh", 'g'); // template function got called!
    /*
    NOTE: Here, the display function is being called with "suryansh" (a string) and 'v' (a char), the version
    that takes two parameters of any type is selected by the compiler. This is because "suryansh" is implicitly
    convertible to a const char*, and 'v' is implicitly convertible to an int due to the standard promotions.
    */

    /*
    const char* is a pointer to a constant character or a string literal in C++. In this case, the * indicates
    that it's a pointer, const means that the value it's pointing to cannot be modified through this pointer,
    and char specifies the type of the value being pointed to.
    */

    int a = 1999;
    int b = 1972;
    display(a, b); // No marks for guessing here!

    string name = "The name is Suryansh";
    string lname = "Suryansh, Suryansh Grover";
    display(name, lname); // Exact match takes the highest priority!

    display("yo, suryansh here", "suryansh, suryansh grover"); // template function got called!
    // NOTE: By default, these strings are implicitly covertible to char*.

    display(name, "Grover, the surname"); // Obviously, the template function is gonna be called.

    return 0;
}