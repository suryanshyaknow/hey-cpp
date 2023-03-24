#include <iostream>
using namespace std;

// ######################## Passing Objects as Function Arguments ##############################
/*
* Passing objects as function arguments is one way of achieving "Encapsulation", but it ain't the only way.

* 'Encapsulation' is a fundamental concept in object-oriented programming that refers to the practice of bundling
   data and methods that operate on that data within a single unit, usually a class.

   Encapsulation helps to protect the integrity of the data by preventing external code from directly accessing or
   modifying it, and instead requiring that all interactions with the data go through the methods defined within the class.

* One way of implementing encapsulation is by passing objects as function arguments, which allows the function to operate on
  the object's data using the object's methods. This approach helps to keep the object's data and methods together and can
  help to ensure that the object's data is only modified in a controlled and predictable way.

* However, there are other ways to achieve encapsulation, such as by using access modifiers like private and protected to
  control the visibility of the data and methods within a class, or by defining interfaces that specify the behavior that
  can be performed on an object without exposing its internal data.
*/

class Complex
{
    int r, c;

public:
    void setData(int, int);
    void setDataBySum(Complex, Complex);
    void display();
};

void Complex::setData(int real, int complex)
{
    r = real;
    c = complex;
}

void Complex::setDataBySum(Complex c1, Complex c2)
{
    r = c1.r + c2.r;
    c = c1.c + c2.c;
}

void Complex::display()
{
    cout << "Desired Complex number: " << r << " + i" << c << endl; 
}

int main()
{
    Complex c1, c2, c3;

    c1.setData(16, 1999);
    c2.setData(19, 25);
    c3.setDataBySum(c1, c2);

    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}