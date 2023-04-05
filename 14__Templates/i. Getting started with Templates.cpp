#include <iostream>
using namespace std;

// ########################### TEMPLATES (Parameterized Classes) ##################################
/*
* Template is a blue print for class in the same way as class is a blueprint for an object.

* Templates pivots to getting rid of repeatablilty we encounter while creating the same types of classes
  for different data types.

  For example, creating separate vector classes for 'int', 'float', 'double' and 'char' data types.

* Apparently, Templates in C++ allow us to write "generic" code that can work with multiple types. They're
  like blueprints for creating functions or classes that can work with any data type.

  For example, we can create a function that adds two numbers of any data type (int, float, double, etc.)
  using a template. This saves us the trouble of having to write separate functions for each data type.
*/

// Creating a Template
template <class T> // T could be any datatype here whatsoever
class Vector
{
public:
    T *vec;

    Vector();
    T dotProduct(Vector<T> &v);
    void crossProduct(Vector<T> &v);

    template <class U>                                            // declaring a template function
    friend ostream &operator<<(ostream &out, const Vector<U> &v); // overloading the 'stream insertion' operator
};

template <class T>
Vector<T>::Vector()
{
    vec = new T[3]; // 3 components viz i, j, and k.
}

template <class T>
T Vector<T>::dotProduct(Vector<T> &v)
{
    T dot = 0;

    for (int i = 0; i < 3; i++)
    {
        dot += this->vec[i] * v.vec[i];
    }
    return dot;
}

template <class T>
void Vector<T>::crossProduct(Vector &v)
{
    T *c = new T[3];

    c[0] = this->vec[1] * v.vec[2] - v.vec[1] * this->vec[2];
    c[1] = this->vec[0] * v.vec[2] - v.vec[0] * this->vec[2];
    c[2] = this->vec[0] * v.vec[1] - v.vec[0] * this->vec[1];

    cout << c[0] << "i - " << c[1] << "j + " << c[2] << "k";
}

// Defining the overloaded 'stream insertion' operator
template <class T>
ostream &operator<<(ostream &out, const Vector<T> &v)
{
    cout << v.vec[0] << "i + " << v.vec[1] << "j + " << v.vec[2] << "k";
    return out;
}

int main()
{
    Vector<int> v1;
    v1.vec[0] = 26;
    v1.vec[1] = 11;
    v1.vec[2] = 1999;
    cout << "Vector v1 = " << v1 << endl;

    Vector<int> v2;
    v2.vec[0] = 15;
    v2.vec[1] = 9;
    v2.vec[2] = 1972;
    cout << "Vector v2 = " << v2 << endl;

    cout << "v1.v2 = " << v1.dotProduct(v2) << endl;
    cout << "v1 X v2 = ";
    v1.crossProduct(v2);

    return 0;
}