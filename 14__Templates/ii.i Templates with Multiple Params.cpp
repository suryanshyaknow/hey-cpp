#include <iostream>
using namespace std;

// #################### Templates with Multiple Parameters ##########################
/*
* Templates can also have multiple parameters, allowing us to create more complex generic data structures
   and algorithms.

* Nothing fancy it's just that we can pass parameters holding datatypes as many as we desire.
*/

template <typename T1, typename T2>
class MyClass
{
    T1 x;
    T2 y;

public:
    MyClass(T1, T2);
    void add();
};

template <typename T1, typename T2>
MyClass<T1, T2>::MyClass(T1 x, T2 y)
{
    this->x = x;
    this->y = y;
}

template <typename T1, typename T2>
void MyClass<T1, T2>::add()
{
    cout << this->x + this->y << endl;
}

int main()
{
    MyClass<int, double> A(26, 1999);
    A.add();

    MyClass<int, float> B(9.4, 80.6);
    B.add();

    return 0;
}