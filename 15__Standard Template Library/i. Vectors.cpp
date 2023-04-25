#include <iostream>
#include <vector>
using namespace std;

// ################################# VECTORS #####################################
/*
* Vectors are dynamic arrays that can "resize" themselves as needed. They are part of the Standard Template
  Library (STL) and are included in the <vector> header file.

*  Following is the science behind how vectors can grow dynamically:

    i. Internally, Vectors use a dynamically allocated array to store their elements. This array may needed
    to be reallocated to accomodate growth whenever new elements are being added. However, "reallocation" is a
    relatively expensive operation in terms of processing time, so vectors avoid reallocating the array every
    time an element is added.

    ii. In order to avoid the said reallocation, vector containers may allocate some extra storage beyond the
    minimum needed to contain their current elements.

    The way vectors grow can vary between libraries, as they aim to balance the *tradeoff between memory usage
    and reallocations*. However, in all cases, reallocations only occur at intervals that grow logarithmically
    with the size of the vector, allowing for constant time complexity when inserting individual elements at
    the end of the vector.

    iii. As such, compared to arrays, vectors "consume more memory" in exchange for the ability to manage storage
    and grow dynamically in an efficient way.

    This tradeoff allows vectors to provide more flexibility and ease of use compared to fixed-size arrays, but
    it also means that vectors may not be the best choice in situations where memory usage is a critical concern.
*/

template <typename T>
void displayVector(const vector<T> &vec)
{
    cout << "\nYour vector: ";
    int idx = 0;

    cout << "[ ";
    for (T ele : vec)
    {
        if (idx == vec.size() - 1)
        {
            cout << ele;
            continue;
            // break;
        }
        cout << ele << ", ";
        idx++;
    }
    cout << " ]" << endl;
}

int main()
{
    int ele, size = 5;

    // Ways to create a vector...
    vector<int> vec;         // zero-length vector
    vector<char> vec2(4);    // 4-element character vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> vec4(6, 3);  // 6-element int vector of 3s

    displayVector<int>(vec);
    displayVector<int>(vec4);

    // cout << "Enter the size of the vector you want: ";
    // cin >> size;

    // // Adding elements to this vector...
    // cout << "Enter the elements in your desired vector" << endl;
    // for (int idx = 0; idx < size; idx++)
    // {
    //     cin >> ele;
    //     vec.push_back(ele);
    // }

    // cout << "vec.size() = " << vec.size() << endl;
    // displayVector<int>(vec);

    // cout << "vec.begin() = " << vec.begin() << endl;
    // cout << "vec.end() = " << vec.end() << endl;
    /*
    The issue in the above two lines is that `vec.begin()`and `vec.end()` return "iterators", not pointers.
    Therefore, we cannot directly print them using cout.
    */

    /*
    ITERATOR: An iterator is an object that allows us to traverse a container (like a vector or a list) and access
    its elements. It is similar to a pointer in that it points to a specific element within the container, but it
    also has additional functionality, such as being able to move forward or backward within the container, and
    being able to compare its position with other iterators.

    We could think of it like a tour guide that takes us through a museum. The tour guide (iterator) knows where
    all the exhibits (elements) are and can lead us to each one in turn. We can also ask the tour guide to take
    us back to a previous exhibit or skip ahead to a different one. Additionally, we can ask the tour guide whether
    we've seen all the exhibits or whether there are more left to see.
    */

    // cout << "*(vec.begin()) = " << *(vec.begin()) << endl;
    // cout << "*(vec.end() - 1) = " << *(vec.end() - 1) << endl; // as vec.end() returns an iterator pointing to one past the last element of the vector.
    // cout << "vec.front() = " << vec.front() << endl;
    // cout << "vec.back() = " << vec.back() << endl;

    // // ################# Inserting an element on to a specific position #################
    // displayVector<int>(vec);
    // vector<int> :: iterator iter = vec.begin(); // since, the member function at down below accepts an iterator!
    // // vec.insert(iter+3, 1999);
    // vec.insert(iter+3, 4, 1999);
    // displayVector<int>(vec);

    return 0;
}