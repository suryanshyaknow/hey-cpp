#include <iostream>
#include <string>
using namespace std;

// ########################## COPY CONSTRUCTOR ################################
/*
* A Copy Constructor is a special type of constructor in C++ that is used to create a new object as a
  copy of an existing object. It takes an object of the same class as a parameter and creates a new object
  that is a copy of that parameter.

* For example, if we have a class called Person, and we create an object p1 of that class, we can use a
  copy constructor to create a new object p2 that is an exact copy of p1.

  This is useful when we want to create a new object that is identical to an existing object, without
  having to manually copy all of its data members.
*/

class Person
{
    string name;
    int age;
    friend ostream &operator<<(ostream &out, const Person &p); // Overloading the 'stream insertion' operator

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    // Declaring and defining copy constructor
    Person(const Person &p)
    {
        name = p.name;
        age = p.age;
    }
};

// Defining the 'stream insertion' operator
ostream &operator<<(ostream &out, const Person &p)
{
    out << "The name's " << p.name << " and is fuckin " << p.age << " years old." << endl;
    return out;
}

int main()
{
    Person p1("Spidey", 23);
    cout << p1;

    Person p2 = p1; // Copy constructor is gon' be invoked here
    cout << p2;

    Person p3(p1); // Copy constructor is also gonna be invoked here
    cout << p3;

    // NOTE: Incase, we havn't made any copy constructor, compiler's deafult one would have waltz in.

    return 0;
}