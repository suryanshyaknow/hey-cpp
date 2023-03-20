# include <iostream>
# include <iomanip>
using namespace std;


int main() {

    // ######################### CONSTANTS ###############################
    const float Pi = 22.0f/7;
    cout << "Pi (original constant) = " << Pi << endl;

    // NOTE: The issue is that 22/7 is being evaluated as integer division because both operands are integers, 
    // resulting in the integer value of 3. To fix this, we oughta make one of the operands a float or 
    // use a float literal. 

    // Pi = 3.14;  // Tryna change the value of a constant
    // cout << "Pi (modified constant) = " << Pi << endl;  // Of course, we'll get an error!

    // ######################## MANIPULATORS ##############################
    /* Special functions that are used to modify the behavior of input/output streams.

    They are used with the insertion (<<) and extraction (>>) operators to perform special tasks such as 
    formatting input and output data.
    */

    // i. `setw()`: Sets the width of the field in which data is printed.
    cout << "\nUsing `setw` manipulator: " << endl;

    int a = 23;
    int b = 19999;
    int c = 197219876;
    cout << "a: " << setw(8) << a << endl;
    cout << "b: " << setw(8) << b << endl;
    cout << "c: " << setw(8) << c << endl;

    // ii. `setprecision(int n)`: Sets the number of decimal places to be displayed for the next floating-point 
    // number.
    cout << "\nUsing `setprecision()` manipulator: " << endl;
    
    double num = 3.14159265358979323846;
    cout << setprecision(4) << num << endl;

    // iii. `left`: Sets the output to be left-justified.
    cout << "\nUsing `left` manipulator: " << endl;
    cout << left << setw(10) << "Hello" << "World" << endl;

    /* NOTE: Since "Hello" is only 5 characters long, the remaining 5 characters will be filled with whitespace 
    on the right-hand side of "Hello" to make up the required width of 10.
    */
    
    // iv. `right`: Sets the output to be right-justified.
    cout << "\nUsing `right` manipulator: " << endl;
    cout << right << setw(10) << "Hello" << "World" << endl;

    // v. `fixed`: Sets the floating-point output to be displayed in fixed-point notation.
    cout << "\nUsing `fixed` manipulator: " << endl;
    cout << fixed << setprecision(4) << num << endl;
    
    // vi. `scientific`: Sets the floating-point output to be displayed in scientific notation.
    cout << "\nUsing `scientific` manipulator: " << endl;
    cout << scientific << setprecision(4) << num << endl;

    return 0;
}