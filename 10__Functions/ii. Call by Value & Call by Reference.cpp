# include <iostream>
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