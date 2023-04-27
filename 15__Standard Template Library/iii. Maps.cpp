#include <iostream>
#include <map>
#include <string>
using namespace std;

// ########################## MAPS (Assosciative Containers) ###################################
/*
Maps are containers that store elements in key-value pairs. Maps are implemented as balanced binary search
trees, which provides logarithmic time complexity for insertion, deletion, and searching operations.
*/

template <typename T1, typename T2>
void displayMap(const map<T1, T2> m)
{
    /*
    NOTE: Using a `const_iterator` is necessary because the `displayMap` function takes a constant reference
    to a map as its argument. This means that the map cannot be modified inside the function.

    If we were to use a non-const iterator to iterate over the elements of the map, we would be able to modify
    the values of the map, which would violate the constness of the map. This would result in a compilation error,
    because the type of the argument passed to the function does not match the type of the parameter that the
    function expects.
    */

    typename map<T1, T2>::const_iterator iter = m.begin();
    cout << "\n" << endl;
    for (iter; iter != m.end(); iter++)
    {
        cout << (*iter).first << ": " << (*iter).second << endl;
    }
}

int main()
{
    map<string, int> marks;
    cout << "The size of the marks map at the time is " << marks.size() << "." << endl;

    marks["Suryansh"] = 99;
    marks["Yami"] = 98;
    marks["Asta"] = 58;
    marks["Julius"] = 100;
    marks["Mereleona"] = 95;

    // displaying the `marks` map
    displayMap(marks);

    // Inserting a pair into a map...
    marks.insert({"Fuego", 85});
    marks.insert({{"Vanessa", 38}, {"Zora", 45}});
    displayMap(marks);

    cout << "The size of the marks map now is " << marks.size() << "." << endl;
    cout << "The max_size of the marks map is " << marks.max_size() << "." << endl;
    
    // marks.empty(): Returns true if the %map is empty. (Thus begin() would equal end().
    cout << "marks.empty() = " << marks.empty() << endl;


    return 0;
}