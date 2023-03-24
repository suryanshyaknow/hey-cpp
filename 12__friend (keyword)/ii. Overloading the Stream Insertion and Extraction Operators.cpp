#include <iostream>
#include <string>
using namespace std;

// ################### Overloading the Stream Insertion and Extraction Operators #######################
/*
One common use of friend functions is to overload the stream insertion and extraction operators (`<<` and `>>`)
to work with user-defined types.

By making the stream insertion and extraction operators friend functions of the class, they can directly
access the private data members of the class and read or write them to a stream, without requiring getters
or setters.

NOTE: Exactly like the time when we overloaded dundo methods -- `__str__` and `__repr__ -- in Python.
      This allowed us to control how the object is represented as a string when it's printed or converted to 
      a string, just as the `__str__` and `__repr__` methods do in Python.
*/

class Person
{
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;    
    }

    // Declare friend functions as friend of the class
    friend ostream &operator<<(ostream &out, const Person &p);
    friend istream &operator>>(istream &in, Person &p);
};

// Defining stream extraction operator
ostream &operator<<(ostream &out, const Person &p)
{
    out << "Name: " << p.name << ", Age: " << p.age;
    return out;
}

// Defining stream insertion operator
istream &operator>>(istream &in, Person &p)
{
    cout << "Enter name: ";
    in >> p.name;
    cout << "Enter age: ";
    in >> p.age;
    return in;
}

int main()
{
    Person p1("Spidey", 23);
    cout << p1 << endl;

    Person p2("", 0);
    cin >> p2;
    cout << p2 << endl;

    Person p3("Shinichi", -23);
    cin >> p3;
    cout << p3 << endl;

    return 0;
}