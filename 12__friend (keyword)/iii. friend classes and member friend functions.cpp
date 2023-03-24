#include <iostream>
using namespace std;

class Complex; // forward declaration

// Defining class `Calc`
class Calc
{
public:
    int add(int, int);
    int addRealPart(Complex, Complex);
    int addComplexPart(Complex, Complex);
};

// Defining class `Complex`
class Complex
{
    int r, c;
    friend int Calc::addRealPart(Complex, Complex);
    friend int Calc::addComplexPart(Complex, Complex);

public:
    void setData(int, int);
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

int Calc::add(int num1, int num2)
{
    return num1 + num2;
}

int Calc::addRealPart(Complex c1, Complex c2)
{
    return c1.r + c2.r;
}

int Calc::addComplexPart(Complex c1, Complex c2)
{
    return c1.c + c2.c;
}

int main()
{
    Complex c1, c2;
    Calc cal;

    c1.setData(26, 1999);
    c2.setData(15, 1972);

    cout << "c1: ";
    c1.display();

    cout << "c2: ";
    c2.display();

    cout << "\nSum of real parts of c1 and c2  = " << cal.addRealPart(c1, c2) << endl;
    cout << "Sum of complex parts of c1 and c2  = " << cal.addComplexPart(c1, c2) << endl;

    return 0;
}