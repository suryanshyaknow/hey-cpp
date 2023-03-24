#include <iostream>
using namespace std;

// ############################# STATIC MEMBERS ###################################
/*
* In C++, a "Static Member" is a class member that belongs to the class itself, rather than to any
specific object created from that class.

* In other words, a static member is a "shared" variable or
function that is accessible to all objects of that class.

* When a static member is declared in a class, it is "created and initialized only once", before any
object of the class is created. This means that all objects of the class share the same value of the
static member.

NOTE: We can't even initialize these static variables via the class objects.
*/

class Employee
{
    long long int id;
    static long long int count; // The retained value is gonna be shared by every new object
    // static long long int count = 0; // Can't even initialize inline

public:
    void setData();
    void getData();
    static void getCount(); // Static Member Function
};

// Initialization of Static Member
long long int Employee::count = 0; // Must do it this way only!

void Employee::setData()
{
    cout << "\nEnter the Employee's Id: ";
    cin >> id;

    count++;
}

void Employee::getData()
{
    cout << "Employee's Id: " << id << endl;
    cout << "Employee's Count is " << count << endl;
}

// ######################## STATIC MEMBER FUNCTIONS ###############################
/*
* Sole purpose is to access all the "Static Memers" and other "Static Member Functions",
without creating an object of the class.

* Can be 'invoked' using the class name followed by the scope resolution operator "::" without
creating an object of the class.

* Kinda an exclusive function for static members only.

* Since , they can't acces other private and public members and function of a class, they can only
be used to perform operations that're not specific to any object of the class and that don't require
an instance of the class.

* Overall, static member functions provide a way to "encapsulate functionality" that is not specific to
a particular instance of the class, but rather is related to the class as a whole.
*/

// Defining Static Member Function of the class Employee
void Employee::getCount()
{
    cout << "Yo! I'm here only to access the static members but I can't access any public or private members of the class. Warie-na, my bad!" << endl;
    cout << "Anyway, here's you Employee count: " << count << endl;
}

int main()
{
    // long long int Employee::count = 1;  // Qualified name ain't allowed!
    Employee spidey, suryansh, mandy;

    spidey.setData();
    spidey.getData();
    spidey.getCount(); // Can very well be accessed without an object too, goes without sayin though

    suryansh.setData();
    suryansh.getData();
    Employee::getCount(); // Like this!

    mandy.setData();
    mandy.getData();

    return 0;
}