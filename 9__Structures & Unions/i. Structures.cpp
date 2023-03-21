#include <iostream>
#include <iomanip>
using namespace std;

// ############################ STRUCTURES ##################################
/*
Up until now we've been using Arrays to store a collection of elements of the exact same datatypes.
What if we would want to store elements having heterogenous datatypes. For that matter, we have STRUCTURES.

* A Structure is a user-defined datatype in C/C++.
* It is a collection of related variables that can be used to represent a "single data entity".
* It's a way of organizing data into a custom-defined type.
*/

struct employee
{
    /* data */
    int eId;
    float salary;
    bool loves_anime;
};

/*
`typdef`, in C++, is used to create an alias or a new name for an existing data type.
It can be used to define a new type name that can be used in place of the original type name.

Using typedef in this way can make our code easier to read and understand, especially when we are working
with complex structures that have long and complicated names. It also makes it easier to modify the structure
in the future, as we only need to update the `typedef` statement rather than changing all instances of the original
type name throughout the code.
*/
typedef struct whatever
{
    /* data */
    bool loves_anime;
    float sal = 40000000; // default until explicitly changed!
} whatever;               // Basically, now we won't have to write "struct whatever <name>" to define a structure variable.

int main()
{
    struct employee spidey;
    spidey.eId = 113;
    spidey.salary = 10000000;
    spidey.loves_anime = true;

    cout << "spidey.eId: " << spidey.eId << endl;
    cout << "spidey.salary: " << fixed << setprecision(0) << spidey.salary << endl;
    cout << "spidey.loves_anime: " << spidey.loves_anime << endl;


    whatever suryansh;
    suryansh.loves_anime = false;
    suryansh.sal = 50000000;

    cout << "\nsuryansh.loves_anime: " << suryansh.loves_anime << endl;
    cout << "suryansh.sal: " << suryansh.sal << endl;
}