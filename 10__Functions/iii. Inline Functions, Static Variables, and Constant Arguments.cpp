#include <iostream>
using namespace std;


// ############################# INLINE FUNCTIONS ###################################
/*
Execution of funciton engages in somewhat 3-4 step process, viz:

* When a function is called, the CPU needs to remember where to return to after the function call is completed.
  To do this, the CPU stores the "memory address of the instruction" following the function call in a special
  register called the "return address".

* Following that it has to copy the actual params to the formal ones, and transfer the control to the specified
  function.

=> This process can become an overhead if the 'execution time' of the function is less than the 'switching time'
   from the caller function to the called function.

   For example, if a function is called frequently and it takes only a few clock cycles to execute, the overhead
   of the function call can become significant and may negatively impact the performance of the program.

   In such cases, using 'inline functions' can help to "reduce the overhead" BY AVOIDING THE FUNCTION CALL
   AND INSTEAD INSERTING THE CODE DIRECTLY INTO THE CALLING FUNCTION.

* An INLINE FUNCTION in C++ is a function that is inserted directly into the code at the point where it is
  called, instead of being executed as a separate function call. This can make the program faster and more
  efficient because it eliminates the overhead of function call, which includes pushing and popping variables
  onto and off the stack.

  Kinda the `lambda` equivalent of Python.
*/

inline float prod(float a, float b)
{
  return a * b;
}

// ############################# STATIC VARIABLES ###################################
inline int summer(int a, int b)
{
  static int c = 0; // This'll be executed only once and that too during the very first function call
  c++;              // From here on, the value of `c` will be retained inside the function
  return a + b + c;
}

inline int next()
{
  static int next_id = 0;
  return next_id++;
}

// ############################ CONSTANT ARGUMENTS ##################################
char strlen(const char *p)
{
  /* Basically commanding the compiler that we're only tryna retrieve the len of the argument passed,
  and not to make any changes in my char `p`.
  */
}

int main()
{
  float x = 10.79, y = 19.395;
  cout << "The product of " << x << " and " << y << " is: " << prod(x, y) << endl;

  int s = 1999, d = 1972;
  cout << "\nThe sum of " << s << " and " << d << " is " << summer(s, d) << endl;
  cout << "The sum of " << s << " and " << d << " is " << summer(s, d) << endl;
  cout << "The sum of " << s << " and " << d << " is " << summer(s, d) << endl;
  cout << "The sum of " << s << " and " << d << " is " << summer(s, d) << endl;
  cout << "The sum of " << s << " and " << d << " is " << summer(s, d) << endl;

  cout << "\n"
       << next() << endl;
  cout << next() << endl;
  cout << next() << endl;
  cout << next() << endl;
  cout << next() << endl;
}