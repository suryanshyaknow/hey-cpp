#include <iostream>
using namespace std;

class Y; // forward propagation to avert compiler from having sudden shocks!

// Declaring and defining class X
class X
{
    int data;

public:
    X(int);
    friend void add(X, Y);
};

X::X(int val)
{
    data = val;
}

// Defining class Y
class Y
{
    int data;

public:
    Y(int);
    friend void add(X, Y);
};

Y::Y(int val)
{
    data = val;
}

// defining that "friend" function `add`
void add(X x, Y y)
{
    cout << "The sum of data members of object types X and Y respectively: " << x.data + y.data << endl;
}

int main()
{
    X x(1999);
    Y y(1972);

    add(x, y);

    return 0;
}