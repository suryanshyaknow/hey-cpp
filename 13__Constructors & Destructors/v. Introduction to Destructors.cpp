#include <iostream>
using namespace std;

// ################################ DESTRUCTORS ######################################
/*
* In C++, destructors are special member functions of a class that are called when an object of that
  class is destroyed or goes out of scope.

  Their main purpose is to free up any resources allocated by the object during its lifetime.

* For example, if an object of a class has dynamically allocated memory or opened a file during its
  lifetime, the destructor would be responsible for deallocating that memory or closing the file.

* When an object of a class is destroyed or goes out of scope, the destructor is automatically called
  by the compiler. This ensures that any resources allocated by the object are properly released, and
  prevents memory leaks or other issues caused by unmanaged resources.
*/

class Num
{
    static int count;

public:
    Num();
    ~Num();
};

// Initializing the static variable `count`
int Num::count = 1999;

// Defining the constructor of class `Num`
Num::Num()
{
    count++;
    cout << "Constructor has been invoked!" << endl;
}

// Defining the destructor of class `Num`
Num::~Num()
{
    count--;
    cout << "Fucking destroyed that object!" << endl;
}

int main()
{
    cout << "We are inside our main function..." << endl;
    cout << "Creating our first object 'n1'..." << endl;
    Num n1;
    {
        cout << "Entering this another block inside the main function itself..." << endl;
        cout << "Creating two more objects --'n2' and 'n3'..." << endl;
        Num n2, n3;
        cout << "Exiting this block..." << endl;
    }
    cout << "Back to the main!" << endl;

    return 0;
}