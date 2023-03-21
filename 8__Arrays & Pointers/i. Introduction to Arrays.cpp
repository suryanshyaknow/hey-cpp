#include <iostream>
using namespace std;

int main()
{

    // ############################### ARRAYS ######################################
    // An Array is a collection of elements having exact same datatypes stored in the contiguous memory locations.

    /*
    WHY USE ARRAYS? WHAT'S THE FUCKIN' NEED?!
    More often than not, a regular variable is not enough (as well as suitable approach) to hold all the data
    elements we desire.

    Say, for example, we've gotta store the marks of 1000 students. Having 1000 discrete vairables ain't gonna
    cut it, neither it's a feasible approach.

    Rather we could simply define an array (of desired datatype) with the size of 1000 which will be able to
    hold the marks of all 1000 students.

    DISADVANTAGE:
    Size Limit: We can store only the fixed size of elements in an array. It doesn’t grow its size at runtime.

    NOTE: Remember that C++ DOES NOT perform bounds checking on arrays, so it's our responsibility as the programmer 
    to ensure that we don't access elements outside the bounds of the array.
    */

    int marks[] = {23, 29, 33, 40};  // initialized an array that can contain 5 elements
    for (int i = 0; i < 4; i++)
    {
        cout << "Marks at the index " << i << " : " << marks[i] << endl;
    }
    cout << "\n";

    int ace_marks[] = {25, 24, 23, 25};
    int idx = 0; 
    while (idx<4) {
        cout << "Ace marks at the index " << idx << " : " << ace_marks[idx] << endl; 
        idx++;
    }
    cout << "\n";

    int grace_marks[4] = {10, 2, 3, 15};
    idx = 0;
    do{
        cout << "Grace marks at the index " << idx << " : " << grace_marks[idx] << endl;
        idx++;
    } while (idx<4);
    cout << "\n";

    return 0;
}