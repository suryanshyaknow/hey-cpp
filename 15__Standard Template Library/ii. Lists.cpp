#include <iostream>
#include <list>
using namespace std;

// ################################ LISTS ####################################
/*
List is a 'container class template' provided by the Standard Template Library (STL) that implements a
"doubly linked list".

A linked list is a linear data structure in which the elements are not stored in contiguous memory locations,
but rather linked together by pointers.

Here are some key features of the list container in C++:

* Elements can be inserted or removed from the list efficiently, in constant time, regardless of their position
  in the list.

* Elements in a list are stored in the order in which they were inserted and can be accessed by iterating through
  the list.

* Elements in a list can be accessed by their position using iterators, which provide bidirectional traversal
  (i.e., you can move forward or backward in the list).

* List in C++, provides a variety of member functions to manipulate the list, such as `push_back()`, `push_front()`,
  `pop_back()`, `pop_front()`, `insert()`, `erase()`, `remove()`, `sort()`, `reverse()`, and more.
*/

template <typename T>
void displayList(const list<T> &l)
{
    typename list<T>::const_iterator iter;

    // cout << "\nDisplaying your desired list..." << endl;
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        /* code */
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l1; // zero-length empty list

    l1.push_back(1972);
    l1.push_back(1976);
    l1.push_back(1999);
    l1.push_back(2004);
    l1.push_back(2011);

    list<int>::iterator iter;                    // declaring an iterator
    iter = l1.begin();                           // defining an iterator
    cout << "*iter = " << *iter << endl;         // dereferencing an iterator
    cout << "*(++iter) = " << *(++iter) << endl; // dereferencing an iterator

    displayList<int>(l1);

    list<int> l2(7); // 7-length empty list

    // Setting elements into the list l2...
    // list<int>::iterator it;
    // cout << "Enter elements one at a time for the list l2..." << endl;
    // int ele;
    // for (it = l2.begin(); it != l2.end(); it++)
    // {
    //     cin >> ele;
    //     *it = ele;
    // }
    // displayList<int>(l2);
    // l2.pop_back();
    // l2.pop_front();
    // displayList<int>(l2);

    // Sorting and Merging the lists
    list<int> l3 = {26, 11, 15, 9, 17, 8, 10, 5};
    displayList(l3);

    // l3.sort();
    // cout << "\nList `l3` after sorting: " << endl;
    // displayList(l3);

    // cout << "\nMerging list `l3` into `l1`: " << endl;
    // l1.merge(l3);
    // displayList(l1);

    // // Reversing a list...
    // cout << "\nReversing the list l1: " << endl;
    // l1.reverse();
    // displayList(l1);

    // // Swapping the lists...
    // cout << "\nSwapping ths lists `l1` and `l3`: " << endl;
    // cout << "List l1: ";
    // displayList(l1);
    // cout << "List l3: ";
    // displayList(l3);

    // l1.swap(l3);

    // cout << "List l1 (after swap): ";
    // displayList(l1);
    // cout << "List l3 (after swap): ";
    // displayList(l3);

    // ########################### SPLICING ################################
    /* 
    void splice (iterator position, list& x);
    void splice (iterator position, list& x, iterator i);
    void splice (iterator position, list& x, iterator first, iterator last);

    Transfers elements from x into the container, inserting them at position.

    The first version (1) transfers all the elements of x into the container.  
    The second version (2) transfers only the element pointed by i from x into the container.
    The third version (3) transfers the range [first,last) from x into the container.
    */

    // Transferring all elements of the list l3 at the 0th index of the list l1...
    cout << "\nTransferring all elements of the list l3 at the 0th index of the list l1..." << endl;
    l1.splice(l1.begin(), l3);
    cout << "List l1 now: ";
    displayList(l1);
    cout << "List l3 now: ";
    displayList(l3);

    // Doing the reverse with list l1...
    cout << "\nDoing the reverse with list l1..." << endl;
    l3.splice(l3.begin(), l1);
    cout << "List l1 now: ";
    displayList(l1);
    cout << "List l3 now: ";
    displayList(l3);

    return 0;
}