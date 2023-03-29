#include <iostream>
using namespace std;

// #################################### THIS ###########################################
/*
* The `this` keyword in C++ is a pointer that points to the object for which a member function is called.
  It is used to refer to the current object inside a member function.

* For example, suppose we have a class MyClass with a member function doSomething(), and we call this
  function on an object obj of type MyClass: obj.doSomething().
  Inside the doSomething() function, we can use the `this` pointer to refer to the current object obj.

  Just like we do with 'self' in python, I wonder.

* Using the `this` pointer can be useful when we have member variables with the same name as function
  parameters or local variables inside the function. By using this, we can explicitly refer to the member
  variable of the current object, rather than the local variable or function parameter.

  Should we don't use `this` keyword, error won't be thrown anyway, but we'll encounter garbage values.
  Because the preference is given to the local variables rather than the class variables.
*/

class X
{
    int x;

public:
    // void setX(int x)
    // {
    //     // x = x;
    //     // This will give us garbage values as priority here is being given to the local variable.

    //     this->x = x; // `this` represents the pointer to the object that has invoked this very member function
    // }

    // By doing this, we are making `setX(int)` to return the object itself that has invoked this member function.
    X &setX(int x)
    {
        // x = x;
        // This will give us garbage values as priority here is being given to the local variable.

        this->x = x; // `this` represents the pointer to the object that has invoked this very member function
        return *this;
    }

    void getX()
    {
        cout << x << endl;
    }
};

int main()
{
    X zoro;
    // zoro.setX(1999);
    // zoro.getX();

    // Now rather than doing what we did above, we can directly do the following:
    zoro.setX(1999).getX(); // because now `zoro.setX(int)` is an object too

    return 0;
}