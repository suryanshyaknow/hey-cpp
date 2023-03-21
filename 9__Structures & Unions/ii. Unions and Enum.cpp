#include <iostream>
using namespace std;

// ############################## UNIONS ####################################
/*
* Union is another similar user-defined datatype that's ALMOST same as "Structures" with the only
difference being they are better at "Memory-Management".

* All of the Union's data members share the same memory space. unlike `struct`, Union doesn't assign a
discrete block of memory to each data element it contains.

* Here in Union:
    (block of memory) = (memory required by the datatype having the largest size) is gonna be shared by all the
    data members an `union` contains.

* Unlike a `struct`, a `union` can only hold the value of one data member at a time. When we assign a value to a
data member in a union, the previous value is overwritten.

* Unions are most useful when the type of data being passed through functions is unknown. Using an `union` which
contains all possible data types can remedy this problem.
*/

union money
{
    /* data */
    int rice;     // 4 bytes
    char car;     // 1 byte
    float pounds; // 4 bytes

    // NOTE: Only one data member to be used at a time.
    /* Had I used a `struct` here instead, 9 bytes would've assigned to it. But since we're using `union`
    here, only 4 bytes (the max that can be used by any data member) will get assigned.
    */
};

int main()
{
    union money m1;

    m1.car = 's';
    cout << "When assigned 'car' some value: " << endl;
    cout << "m1.rice (garbage val): " << m1.rice << endl;
    cout << "m1.car (assigned val): " << m1.car << endl;
    cout << "m1.pounds (garbage val): " << m1.pounds << endl;

    m1.rice = 32;
    cout << "\nWhen assigned 'rice' some value: " << endl;
    cout << "m1.rice (assigned val): " << m1.rice << endl;
    cout << "m1.car (garbage val): " << m1.car << endl;
    cout << "m1.pounds (garbage val): " << m1.pounds << endl;

    m1.pounds = 256.98;
    cout << "\nWhen assigned 'pounds' some value: " << endl;
    cout << "m1.rice (garbage val): " << m1.rice << endl;
    cout << "m1.car (garbage val): " << m1.car << endl;
    cout << "m1.pounds (assigned val): " << m1.pounds << endl;
   
    // ############################### ENUM #####################################
    /* 
    * In C++, an enum (short for enumeration) is a user-defined type that allows us to define a set of 
    "named constant values" or "named constant integerals". 
    
    * Enumerations are used to make our code more "readable" and "self-documenting" by assigning meaningful names 
    to integer values.
    */
   enum anime {DRAGONBALLZ, NARUTO, AOT, ONEPIECE, CASECLOSED, MHA, DEMONSLAYER};
   anime fav1 = ONEPIECE;
   anime current_watch = CASECLOSED;
   anime next_watch = MHA;

   cout << "\nMost favourite anime at the time: " << fav1 << endl;
   cout << "Anime I'm currently watching: " << current_watch << endl;
   cout << "Anime I'm gonna watch next: " << next_watch << endl;

    return 0;
}