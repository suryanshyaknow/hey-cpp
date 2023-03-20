#include <iostream>
using namespace std;

int main()
{

    // ############################## POINTERS #####################################
    // Nothing but the variables that can hold the addresses of other variables.

    int a = 1999;
    int *b; // Declared a variable (pointer here) that can hold the address of other variables.
    b = &a; // `b` holding the address of the `a`

    /*
    `&` -> (address of) operator
    `*` -> dereference (value at) operator
    */

    cout << "The val stored in `b`: " << b << endl;
    cout << "..is same as 'the address of `a` i.e. `&a`: " << &a << endl;
    cout << "The val stored at the address stored in `b`: " << *b << endl;

    // ######################### POINTER TO POINTER ################################

    /* Just trna make another pointer variable `c` that's even able to store the address of a
    pointer itself (here, `b` which already hold on the adress of `a`).
    */
    cout << "\n POINTER TO PONITER CONCEPT: " << endl;
    int **c = &b; // 'Cause `b` here is already a pointer

    cout << "\nThe value `c` holds on to is: " << c << endl;
    cout << "..which is same as \"the address of the pointer `b` i.e. &b\": " << &b << endl;
    cout << "\nThe value stored at the address that `c` holds on to is (of course `&a`): " << *c << endl;
    cout << "\nThe value at address stored in the pointer `b` that is pointed by none other than `c`: " << **c << endl;
}