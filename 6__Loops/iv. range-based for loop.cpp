#include <iostream>
using namespace std;

struct Pair;                // structure prototype
struct Pair getMaxAndMin(); // function prototype

struct Pair
{
    int max;
    int min;
};

int main()
{

    // ######################### LOOPS (Iteration Statements) ###############################
    /* Used to repeat a block of code until a certain condition is met.

    i.   while loop
    ii.  do-while loop
    iii. for loop
    iv.  RANGE-BASED FOR LOOP
    */

    // ############################ RANGE-BASED FOR LOOP ###################################
    /*
    Write a program that takes an array of integers as input and outputs the maximum and minimum values
    in the array using a range-based for loop. The program should prompt the user to enter the number of
    integers in the array and then the integers themselves.
    */
    struct Pair max_min = getMaxAndMin();
    cout << "The maximum and minimum values are " << max_min.max << " and " << max_min.min << " respectively!" << endl;
    return 0;
}

struct Pair getMaxAndMin()
{
    struct Pair result; // Will hold on to the maximum and minimum values
    int size;

    cout << "Enter the desired size of the array: ";
    cin >> size;

    int arr[size]; // Declared an array of the size `size`
    int idx = 0; 

    // Fetching elements from the console entered by the user
    while (idx < size)
    {
        cout << "\nEnter the element at the index " << idx << " : ";
        cin >> arr[idx];
        idx++;
    }

    // Displaying the elements of the array the user entered
    cout << "\nDisplaying the array you formed: ";
    for (int ele : arr)
    {
        cout << ele << "\t";
    }
    cout << endl;

    // Finding the largest element
    result.max = arr[0];
    for (int ele : arr)
    {
        if (result.max < ele)
        {
            result.max = ele;
        }
    }

    // Finding the smallest element
    result.min = arr[0];
    for (int ele : arr)
    {
        if (result.min > ele)
        {
            result.min = ele;
        }
    }
    return result;
}
