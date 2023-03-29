#include <iostream>
using namespace std;

// ########################### CONSTRUCTOR OVERLOADING #################################
/*
* Constructor overloading is a concept where we can define multiple constructors with different parameters
  in the same class.

* Each constructor has a unique set of input parameters, which means that when we create an object of the
  class, we can choose which constructor to use based on the arguments we pass to it.

* The primary purpose of constructor overloading is to provide "flexibility" to the programmer in terms of
  object creation. It allows us to create an object of the class in different ways, depending on the type
  and number of arguments we pass to the constructor.

  For example, we might define a constructor that takes no parameters and initializes the object to default
  values, another constructor that takes one parameter and initializes the object accordingly, and a third
  constructor that takes two or more parameters and initializes the object based on those values.
*/

class Complex
{
    int real, complex;
    friend ostream &operator<<(ostream &out, const Complex &c); // Overloading the 'stream insertion' operator

public:
    /* Constructor Overloading */
    Complex(){}; // Will beahve exactly like the 'default' constructor
    Complex(int);
    Complex(int, int);
    Complex(Complex, Complex);
};

Complex::Complex(int r)
{
    real = r;
}

Complex::Complex(int r, int c)
{
    real = r;
    complex = c;
}

Complex::Complex(Complex c1, Complex c2)
{
    real = c1.real + c2.real;
    complex = c1.complex + c2.complex;
}

// Defining the 'stream insertion' operator
ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real << " + i" << c.complex << endl;
    return out;
}

int main()
{   
    Complex c;
    cout << c << endl;
    
    cout << Complex() << endl;
    cout << Complex(34) << endl;
    cout << Complex(37, 56) << endl;
    cout << Complex(Complex(19, 79), Complex(34)) << endl;

    return 0;
}