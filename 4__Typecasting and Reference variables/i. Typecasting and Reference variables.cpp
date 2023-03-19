# include <iostream>
using namespace std;


void increment(int& n) {
    n--;
    // Basically, using a reference variable to modify the value of an existing variable.

    /*
    Reference variables are often used as function parameters to allow functions to modify their arguments. 
    They are also commonly used in C++ to implement "operator overloading", where we can define custom behavior 
    for operators like + and - when applied to your own custom data types.
    */
}

int main() {

    float a = 22.3;
    long double b = 33.87;  // Similar to `float`, but with a higher "precision" 

    /*
    By default, if the value 22.3 (not the variable `a`) is to be passed somewhere it's gonna
    be treated (or interpreted) as double by the compiler.

    To resolve this, we can "typecast" the value by simply appending f(or F) to the value,
    should we desire "floating point" datatype. And naturally l(or L) for "long double"
    datatype.
    */

    // ################# Float, Double, and Long Double Literals #####################
    cout << "size of 22.3: " << sizeof(22.3) << endl;  // double (by default)
    cout << "size of 22.3f: " << sizeof(22.3f) << endl;  // float (typecasted)
    cout << "size of 22.3F: " << sizeof(22.3F) << endl;
    cout << "size of 33.87: " << sizeof(33.87) << endl;  // double (by default)
    cout << "size of 33.87l: " << sizeof(33.87l) << endl;  // long double (typecasted)
    cout << "size of 33.87L: " << sizeof(33.87L) << endl;

    // ############################# Typecasting #####################################
    int x = 23;
    float y = 23.7;

    cout << "\ny: " << y << endl;
    cout << "y (typecasted to int): " << int(y) << endl;
    cout << "x:" << x << endl;
    cout << "x (typecasted to float): " << float(x) << endl;

    cout << "x + y: " << x + y << endl;
    cout << "x + int(y): " << x + int(y) << endl;


    // ########################## Reference Variables ################################
    // Nothing but two variables "pointing" towards the same "location".

    /*
    EXTRA: A "Reference variable" is a variable that is an alias for another variable. 
    When we create a reference variable, we're essentially creating another name for an existing variable. 
    
    NOTE: Any changes made to the reference variable are also made to the original variable.
    */
    int suryansh = 1999;
    // I want another variable namely "spidey" to refer to 1999 too!
    int& spidey = suryansh;  // `spidey` is an alias for `suryansh`
    cout << "\nsuryansh: " << suryansh << endl; 
    cout << "spidey : " << spidey << endl;

    // Now, I'll try to modify the variable `suryansh` indirectly i.e. via reference variable.
    increment(suryansh);
    cout << "\nsuryansh (modified via reference variable): " << suryansh << endl;

    return 0;
}