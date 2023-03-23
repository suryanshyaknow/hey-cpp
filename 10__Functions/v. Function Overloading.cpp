#include <iostream>
using namespace std;


// ############################ FUNCTION OVERLOADING #################################
/*
Idea: Functions with exact same names being used for different taks.

* Function Overloading refers to the ability to define two or more functions in a programming language
that have same names but different parameters or arguments lists. When a function is called, the
parameters passed to it are gonna determine which variant of the function will be executed.

* Function overloading can help simplify code and make it more readable by allowing us to use the same
function name for different but related operations.
*/

int add(int, int);
float add(float, float, float);
char add(char, char);

int main()
{
    cout << add(1999, 1972) << endl;
    cout << add(15.09, 26.11, 17.08) << endl;
    cout << add('s', 'd') << endl;
    return 0;
}

int add(int num1, int num2)
{
    cout << "\nI'm solely for adding two integers!" << endl;
    return num1 + num2;
}

float add(float num1, float num2, float num3)
{
    cout << "\nMy aim of life is to add three fuckin' floating point integers!" << endl;
    return num1 + num2 + num3;
}

char add(char a, char b)
{
    cout << "\nAbout me? I'm just here to concatenate two characters!" << endl;
    return a + b;
}