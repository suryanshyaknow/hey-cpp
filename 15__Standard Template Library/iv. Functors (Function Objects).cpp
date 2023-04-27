#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

// ########################### FUNCTORS (FUNCTION OBJECTS) #################################
/*
* A Functor is nothing but a function wrapped in a class so that it's readily available like an object.

* It behaves like a function but can also store data as part of its state. Functors are commonly used in
  the C++ Standard Template Library (STL) to provide a flexible and reusable way of customizing the behavior
  of algorithms and containers.
*/

// template <typename T>
// void displayArray(const T arr[], int size)
// {
//   int idx = 0;
//   cour << "[ ";
//   for (T ele : arr)
//   {
//     if (idx == size - 1)
//     {
//       cout << ele << " ]";
//     }
//     cout << ele << ", ";
//     idx++;
//   }
// }

/*
NOTE: In the for loop, the `T` ele variable is being used to iterate over the array `arr`, which is declared as
a pointer to the array's first element. This will not work correctly, as `T` ele will only hold a copy of the
array element, and any changes made to it will not be reflected in the original array.

This is because range-based for loops create a copy of each element, rather than a reference to the original
element.

Even though we are not making any changes to the elements of the array, the range-based for loop still creates
a copy of each element in the array. This means that the `ele` variable inside the loop will hold a copy of each
element, rather than a reference to the original element in the array.
*/

template <typename T>
void displayArray(const T arr[], int size)
{
  cout << "[ ";
  for (int idx = 0; idx < size; idx++)
  {
    if (idx == size - 1)
    {
      cout << arr[idx] << " ]" << endl;
      break;
    }
    cout << arr[idx] << ", ";
  }
}

int main()
{
  int arr[] = {42, 24, 13, 35, 16, 56, 90, 7};
  displayArray(arr, 8);
  sort(arr, arr + 4);
  cout << "\nAfter sorting the first four elements of `arr`: " << endl;
  displayArray<int>(arr, 8);

  // Now, to sort the same in a descending order we have a functor called `greater<typename>()`.
  sort(arr, arr+4, greater<int>());
  cout << "\nAfter sorting the first four elements of `arr` in a descending manner: " << endl;
  displayArray(arr, 8);

  cout << "\nAfter sorting the whole `arr` in a descending manner: " << endl;
  sort(arr, arr+8, greater<int>());
  displayArray(arr, 8);  
  return 0;
}