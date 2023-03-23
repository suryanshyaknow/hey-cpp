#include <iostream>
#include <string>
using namespace std;

// ########################## Nesting of Member Functions ################################
/*
Nothing but a fancy term for using a method of a class inside other member functions of the
same class. Also known as "Method Chaining".

This technique can help make the code more readable and concise, as well as reduce the number
of lines of code needed to perform a certain task.
*/

class Example
{
private:
    void innerFunction()
    {
        cout << "Yo! I'm the inner function." << endl;
    }

public:
    void outerFunction()
    {
        cout << "I'm the outer function and I'm about to call the inner function." << endl;
        innerFunction();
    }
};

// Declaring and defining the class `Binary`
class Binary
{
    string bin;

public:
    void read();
    bool isBinary();
    void onesComplement(); // Strings in C++, unlike Python, are mutable!
    void displayOnesComplement();
};

int main()
{
    Example ex;
    ex.outerFunction();

    // ######################## `Binary` Class Implementation ################################
    Binary bin_obj;
    bin_obj.read();
    bin_obj.isBinary();
    bin_obj.onesComplement();
    bin_obj.displayOnesComplement();
    return 0;
}

void Binary::read()
{
    cout << "Enter a number (to check if it's binary): ";
    cin >> bin;
}

bool Binary::isBinary()
{
    for (int idx = 0; idx < bin.length(); idx++)
    {
        if (bin.at(idx) != '0' & bin.at(idx) != '1')
        {
            cout << "\n"
                 << bin << " ain't binary!" << endl;
            exit(0);
            /*
            `exit(0)` is used to immediately terminate a program and exit from the main function with an
            exit status of 0 (which indicates successful execution). It does not perform any cleanup actions,
            such as calling destructors for objects or closing files, and it terminates the entire program
            immediately.
            */
        }
    }
    cout << bin << " is Binary" << endl;
}

void Binary::onesComplement()
{
    isBinary(); // If not, you'd be thrown outta the class!

    int idx = 0;
    while (idx < bin.length())
    {
        if (bin.at(idx) == '0')
        {
            bin.at(idx) = '1';
        }
        else
        {
            bin.at(idx) = '0';
        }
        idx++;
    }
}

void Binary::displayOnesComplement()
{
    isBinary();
    cout << "The '1s Complement' of the said number is " << bin << endl;
}
