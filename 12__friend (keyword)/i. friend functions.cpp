#include <iostream>
using namespace std;

// ############################## Friend Functions ####################################
/*
* In C++, a 'friend' function is a function that is granted access to the private and protected members
  of a class. This means that a 'friend' function can directly access the private and protected data
  members and member functions of the class, even though it is not a member function of that class.

* Friend functions are declared in the class definition using the 'friend' keyword, and defined outside
  the class definition like any other function.

* Friend functions are useful when we want to provide external functions with access to the internal
  workings of a class, while still maintaining encapsulation and information hiding.
*/

class Complex
{
    int r, c;

public:
    void setData(int, int);
    friend Complex sumComplex(Complex, Complex); // `friend` function declaration
    void display();
};

void Complex::setData(int real, int complex)
{
    r = real;
    c = complex;
}

void Complex::display()
{
    cout << "Desired Complex number: " << r << " + i" << c << endl;
}

// Defining `friend` function
Complex sumComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.r = c1.r + c2.r;
    c3.c = c1.c + c2.c;
    return c3;
}

// ######################## Properties of Friend Functions ############################
/*
* A friend function is not a member of the class, but it can access the private and protected members
  of the class if it is declared as a friend in the class definition.

* A friend function can be declared inside or outside the class definition, but it must be declared
  before it is used.

* A friend function can be declared in the public or private section of the class definition, but its
  access level does not affect its ability to access the private and protected members of the class.

* A friend function can be a "standalone function" or a "member function of another class".
*/

int main()
{
    Complex c1, c2, c3;

    c1.setData(26, 1999);
    c1.display();

    c2.setData(19, 25);
    c2.display();

    c3 = sumComplex(c1, c2);
    c3.display(); // Can access members of the class, it is a `friend` to!

    return 0;
}