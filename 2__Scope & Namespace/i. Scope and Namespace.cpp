#include <iostream>
using namespace std;

int glo = 100;

void print_glo() 
{
    // int glo = 1972;
    cout << "`glo` from the local scope of the `print_glo` (if exists) else from the global scope, whatsoever: " 
    << glo << endl;
}


int main() {
    int glo = 26;  // Declared local variable `glo`
    glo = 1999;  
    // => Update `glo`, got two options -- search glo in the local scope and update it (if there),
    // ..or update the `glo` from the global scope (if there).   

    cout << "`glo` from the main's scope: " << glo << endl;
    
    print_glo();  // Function that prints `glo`
    // => Print glo from the local scope of the `print_glo` if there else print out the global `glo`!
    // Got nothing to do with the scope of the `main()` anywhichway! 

    cout << "\nGlobal variant of `glo` (accessed by SCOPE RESOLUTION operator -- `::`): " << ::glo << endl; 
    // Eventually, We'd wanna access the global val of `glo`, for that, we could use 
    // ..SCOPE RESOLUTION operator i.e. "::"

    return 0;
}