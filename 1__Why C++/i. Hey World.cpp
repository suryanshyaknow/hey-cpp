#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector <string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

// NOTE: The syntax const string& specifies that word is a constant reference to a string object, 
// which means that it cannot be modified within the loop. Using a reference to a string variable 
// allows the loop to avoid copying each element of msg into a new variable during each iteration, 
// which can improve performance in some cases.