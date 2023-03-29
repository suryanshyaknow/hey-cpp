#include <iostream>
using namespace std;

// ############################ CONSTRUCTORS ##################################
/*
* In C++, a "Constructor" is a special function that gets called automatically when we create an
  object of a class. The purpose of a constructor is to initialize the object's data members and
  put the object in a valid state.

* We can think of a constructor as a "blueprint or a recipe for creating an object of a particular class".
  When we create an object, the constructor is called with the specified arguments, and it sets the initial
  values of the object's data members.

  We don't need to have any additional shitty methods now like setvalue() and stuff.

* Constructors have the "same name as the class" and "do not have a return type". They do or can have parameters
  to accept arguments to initialize the data members of the object.

* If we do not define a constructor for a class, a default constructor is automatically generated. This default
  constructor does not take any arguments and initializes the data members to their default values (garbage ones).
*/

class Complex
{
    int n, c;

public:
    Complex(int, int); // Constructor declaration, Parametrized Constructor
    friend void getSum(Complex, Complex);
    void display();
};

Complex::Complex(int nat, int com)
{
    n = nat;
    c = com;
}

void Complex::display()
{
    cout << n << " + i" << c << endl;
}

// Defining "friend" function `getSum`
void getSum(Complex c1, Complex c2)
{
    int nat_sum = c1.n + c2.n;
    int complex_sum = c1.c + c2.c;

    Complex sum(nat_sum, complex_sum);

    cout << "Desired sum: ";
    sum.display();
}

int main()
{
    Complex c1(15, 1972), c2(17, 1976);
    c1.display();
    c2.display();

    getSum(c1, c2);
    return 0;
}