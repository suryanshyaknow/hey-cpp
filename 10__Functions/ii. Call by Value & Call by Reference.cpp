#include <iostream>
using namespace std;

// ########################## Call by Value & Call by Reference ################################
/*
"Call by Value" means that a copy of the argument is passed to the function. This means that any
changes made to the parameter inside the function do not affect the original argument outside the function.
It's like making a photocopy of a book page and working on the photocopy instead of the original. Whatever
changes we make to the photocopy will not affect the original book page.

On the other hand, "Call by Reference" means that the address of the argument is passed to the function.
This allows the function to directly modify the original argument. It's like giving someone access to our
book so they can write in it directly. Any changes they make will be reflected in the original book.

In C++, we can pass arguments by reference by using an ampersand (&) symbol before the parameter name in the
function definition.
*/

// ################################### Call by Value ###########################################
void swap_by_values(int a, int b) // Takes in copied values of the "Actual" params
{
    int temp = a;
    a = b;
    b = temp;
}

// ################################# Call by Reference #########################################
void swap_by_reference(int *a, int *b) // Making formal params `a` and `b` as pointers so as to store addresses of the "Actual" params
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by Reference using "Reference Variables"
void swapReferences(int &a, int &b) // Using reference variables to reflect changes in the original variables
{
    int temp = a;
    a = b;
    b = temp;
}

struct Pair
{
    int &A;
    int &B;

    Pair(int &a, int &b) : A(a), B(b) {};  // Non-default Constructor
    /*
    In this implementation, the Pair struct has a constructor that takes two integer references `a` and `b`, 
    and initializes the reference members `A` and `B` to refer to them. The `swapReferences_` function swaps 
    the values of `a` and `b` as before, and then returns a Pair struct initialized with the swapped values 
    of `a` and `b`.

    By initializing the reference members of Pair in its constructor, we avoid the compiler error and ensure 
    that the references are initialized to valid objects.
    */
} ;

Pair swapReferences_(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    Pair pair(a, b);

    return pair;
}

main()
{
    int x = 1999, y = 1972;
    cout << "Original values: "
         << "\nx = " << x << "\ny = " << y << endl;

    swap_by_values(x, y); // Swapping by Values
    cout << "\nThe values after `swap_by_values`: "
         << "\nx = " << x << "\ny = " << y << endl;
    cout << "As expected, no changes whatsoever!" << endl;

    swap_by_reference(&x, &y); // Swapping by References
    cout << "\nThe values after `swap_by_values`: "
         << "\nx = " << x << "\ny = " << y << endl;

    swapReferences(x, y);
    cout << "\nThe values after `swapReferences`: "
         << "\nx = " << x << "\ny = " << y << endl;

    Pair x_and_y = swapReferences_(x, y);
    cout << "\nThe values after `Pair swapReferences_`: "
         << "\nx = " << x_and_y.A << "\ny = " << x_and_y.B << endl;
}
