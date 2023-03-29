#include <iostream>
using namespace std;

// ############################## Pointers to Objects ####################################
class Complex
{
    int real, img;

public:
    Complex(){}; // default constructor clone
    Complex(int, int);
    void alterData(int, int);                                   // to alter the existing values of `real` and `img`
    friend ostream &operator<<(ostream &out, const Complex &c); // Overloading the 'stream insertion' operator
};

// Defining parameterized constructor function
Complex::Complex(int r, int i)
{
    real = r;
    img = i;
}

// Defining `alterData` member function
void Complex::alterData(int r, int i)
{
    real = r;
    img = i;
}

// Defining 'stream insertion' operator
ostream &operator<<(ostream &out, const Complex &c)
{
    cout << c.real << " + i" << c.img;
    return out;
}

int main()
{
    Complex c1(15, 1972);
    cout << "c1 = " << c1 << endl;

    Complex *c2 = &c1; // a pointer `c2` to an object (here, `c1`) of class `Complex`
    cout << "*c2 (before altering data) = " << *c2 << endl;
    (*c2).alterData(26, 11);
    cout << "*c2 = " << *c2 << endl;
    cout << "*c1 = " << c1 << endl;

    // ################################# Arrow Operator ######################################
    Complex *ptr = new Complex; // dynamically created a `Complex` object
    cout << "\n*ptr (garbage) = " << *ptr << endl;
    ptr->alterData(17, 1972);
    // is exactly same as doing this: (*ptr).alterData(17, 1972);
    cout << "*ptr = " << *ptr << endl;

    // ################################ Array of Objects #####################################
    /*
    In C++, the arrow (->) operator is used to access the members of an object that is pointed to by
    a pointer.
    It is essentially a shorthand notation for dereferencing a pointer and then accessing a member of
    the object being pointed to.
    */
    Complex *arr = new Complex[5];

    // first object of the array
    arr->alterData(15, 1972);

    // second object of the array
    (arr + 1)->alterData(17, 1976);

    // third object of the array
    (arr + 2)->alterData(26, 1999);

    // fourth object of the array
    (arr + 3)->alterData(18, 2004);

    // fifth object of the array
    (arr + 4)->alterData(10, 2011);

    int idx = 0;
    do
    {
        cout << *(arr + idx) << "\t";
        idx++;
    } while (idx < 5);

    return 0;
}