#include <iostream>
#include <string>
using namespace std;

// ################################ FUNCTION TEMPLATES ####################################
/*
* Function Templates are nothing fancy they are exactly same as the conventional templates with only
difference being that templates here are to be made for the function but classes.

* Now that I know the concept of templates, it'd be better if I can just implement it instead of overloading
the functions or classes just because I wanna use different datatypes in different scenarios.

* With function templates, we can have a basic structure for a function, but we for sure can customize it to
work with different types of data depending on what we need.
*/

template <typename T1, typename T2, typename T3>
T3 add(T1 x, T2 y)
{
    return x + y;
}

template <typename T>
void swap_them_all(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout << "add<char, int, int>('s', 1999): " << add<char, int, int>('s', 1999) << endl;
    cout << "add<float, int, double>(26.11, 1999): " << add<float, int, double>(26.11, 1999) << endl;

    string n1 = "Suryansh";
    string n2 = "Spidey";
    cout << "Hi, my name is " << n1 << "!" << endl;

    swap_them_all<string>(n1, n2);
    cout << "Hi, (after swapping) my name is " << n1 << "!" << endl;

    int y1 = 1999;
    int y2 = 2000;
    cout << "Hey, I was born in the year " << y1 << "." << endl;

    swap_them_all(y1, y2);
    cout << "Hey, (after swapping) I was born in the year " << y1 << "." << endl;
    return 0;
}