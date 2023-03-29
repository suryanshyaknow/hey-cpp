#include <iostream>
using namespace std;

// ############################### NEW ######################################
/*
* In C++, objects can be allocated memory either on the "stack" or on the "heap".

  i. When an object is created on the "stack", memory is allocated from the stack at the point of declaration.

  ii. When an object is created on the "heap", memory is allocated from the heap using the `new` operator.

  "new": The `new` keyword is used to allocate memory dynamically at runtime. It allows the programmer to
  allocate memory for an object or array of objects on the heap rather than the stack.

  The new keyword returns a pointer to the object or array of objects on the heap rather than the stack.

* The main difference between stack and heap allocation is their 'lifetime' and the 'way memory is managed'.

  Objects allocated on the stack have a 'limited lifetime' and are automatically deallocated when they go out
  of scope.

  In contrast, objects allocated on the heap have a 'potentially unlimited lifetime' and must be manually
  deallocated using the `delete` operator when they are no longer needed.

* Initializing an object on the heap or stack has no difference in terms of how the object is initialized.
  The constructor of the object is called in both cases.

  However, initializing an object on the heap may involve "additional overhead" due to the dynamic allocation
  and deallocation of memory.
*/

int main()
{
  int *ptr = new int(23); // declared and initialized a pointer `ptr` dynamically i.e. in the heap
  cout << "ptr = " << ptr << endl;
  cout << "ptr = " << *ptr << endl;                  // dereferenced `ptr`
  cout << "sizeof(*ptr) = " << sizeof(*ptr) << endl; // size occupied by the value present at the location `ptr`
  delete ptr;                                        // freeing up the memory occupied by the `ptr` in heap.

  int *arr = new int[5];               // dynamically initialized an array
  cout << "\narr = " << arr << endl;   // address of the first element of the dynamically created array
  cout << "*arr = " << *arr << endl;   // I'm expecting some garbage value here...
  cout << "arr[0] = " << *arr << endl; // I'm expecting some garbage value here...

  // As expected, I did get garbage values there.

  arr[0] = 1972;
  arr[1] = 1976;
  arr[2] = 1999;
  arr[3] = 2004;
  arr[4] = 2011;

  for (int idx = 0; idx < 5; idx++)
  {
    cout << arr[idx] << "\t";
  }
  cout << endl;

  /*
  `sizeof` operator with a pointer, it returns the size of the pointer itself, which is typically the
  same size as a memory address on the system (4 bytes or 8 bytes depending on the system's architecture).

  Therefore, sizeof(arr) will return either 4 or 8, depending on the system's architecture, regardless of
  the number of elements in the array.
  */
  cout << "sizeof(arr) = " << sizeof(arr) << endl;
  cout << "sizeof(arr[0]) = " << sizeof(arr[0]) << endl;

  delete[] arr; // freeing up the memory occupied by `arr`

  return 0;
}