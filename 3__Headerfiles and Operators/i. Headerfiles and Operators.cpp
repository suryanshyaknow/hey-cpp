// ############################ HEADER FILES ################################
/*
In C++, header files are used to "declare" or "define" the types, functions, and variables that are used 
in a program. In C++, there are mainly two types of header files:

i. System Header files 
These are header files that are provided with the compiler or standard library and are generally included 
using angle brackets (<>). Examples include <iostream>, <cstdio>, <cmath>, etc.

ii. User-defined Header files
These are header files that are created by the user to include their own declarations or definitions and 
are generally included using double quotes (""). Examples include "myheader.h", "utils.h", etc.


=> In general, header files are a key tool for "organizing" and "modularizing" C++ code, allowing programmers 
to create reusable code that can be easily shared and integrated with other programs.
*/

#include<iostream>  // System Header file
using namespace std;

int main() {
    // ############################ OPERATORS ################################ 
    int a = 4, b = 5;

    // ####################### Arithemetic Operators ######################### 
    cout << "Following are the Arithmetic Operators in C++: " << endl;

    cout << "a + b: " << a+b << endl;     
    cout << "a - b: " << a-b << endl;
    cout << "a * b: " << a*b << endl;
    cout << "a / b: " << a/b << endl;  // We'll get integer as an output, no matter what!
    cout << "a % b: " << a%b << endl;
    cout << "a++: " << a++ << endl;  // Print then increement // 4++ -> 5
    cout << "a--: " << a-- << endl;  // 5-- -> 4
    cout << "++a: " << ++a << endl;  // Increement then print // 5
    cout << "--a: " << --a << endl;

    // ######################## Comparison Operators ######################### 
    cout << "\nFollowing are the Comparison Operators in C++: " << endl;
    
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a >= b: " << (a >= b) << endl;

    // ######################### Logical Operators ########################### 
    cout << "\nFollowing are the Logical Operators in C++: " << endl;

    cout << "((a == b) && (a < b)): " << ((a == b) && (a < b)) << endl;  // AND Operator
    cout << "((a == b) || (a < b)): " << ((a == b) || (a < b)) << endl;  // OR Operator
    cout << "!(a == b): " << !(a == b) << endl;  // NOT Operator

    // ################## Insertion & Extraction Operators ###################
    /* 
    << --> Insertion Operator: Inserts values into the stream.
    >> --> Extraction Operator: Extracts the values inputted by the user.
    */

   return 0;
   
}

