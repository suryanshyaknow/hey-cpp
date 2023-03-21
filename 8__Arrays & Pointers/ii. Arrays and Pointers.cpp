#include <iostream>
using namespace std;

int main()
{

    // ######################### ARRAYS & POINTERS ###############################
    /*
    In C++, Arrays and Pointers are closely related concepts. In fact, the name of an array in C++
    can be used as a pointer to the first element of the array.
    */

    int myArray[5] = {1972, 1976, 1999, 2004, 2011};
    // The name 'myArray' itself can be used as a pointer to the first element of the array.

    cout << "`myArray` (pointer to the first element): " << myArray << endl;
    cout << "`*myArray` (dereferenced `myArray` i.e we'll get `myArray[0]`): " << *myArray << endl;

    // ######################## POINTER ARITHMETIC ###############################
    // By increementing one to the pointer to an array we can get the next consecutive element.
    /*
    new_address = current_address + i * size_of_datatype

    NOTE: The compiler inherently understands that and we don't need to multiply `(n - 1)`
    to get the nth index with the size of the datatype. The compiler knows the size of each data type
    and automatically scales the pointer arithmetic by the appropriate amount. So, when we increment
    a pointer to an int by 1, the compiler implicitly multiplies the increment by the size of an int,
    which is typically 4 bytes on most modern systems.

    This means that we don't need to multiply the index by 4 explicitly when using pointer arithmetic
    with an int array. The compiler takes care of this for us, making the code more readable and less
    error-prone.
    */

    int *ptr = myArray; // Pointer to `myArray`
    cout << "\nmyArray's third element accessed via `*(ptr+2)`: " << *(ptr + 2) << endl;
    /*
    NOTE: This is because by adding 2 to the `*ptr` we're making it move by 2 integers (supposedly 8 bytes),
    to point to the third element of the array.
    */

    // Accessing the elements of `myArray` via dereferencing `ptr`
    cout << "\nAccessing the elements of `myArray` via dereferencing `ptr`:\t";
    for (int idx = 0; idx < 5; idx++)
    {
        cout << *(ptr + idx) << '\t';
    }
    cout << endl;

    cout << "*ptr: " << *ptr << endl;         // Oth element
    cout << "*(ptr++): " << *(ptr++) << endl; // will print 0th element, but now `ptr` is pointing towards 1st ele
    cout << "*(++p): " << *(++ptr) << endl;   // will print 2nd element of course

    return 0;
}