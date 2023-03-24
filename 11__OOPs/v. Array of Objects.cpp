#include <iostream>
#include <string>
using namespace std;

class Waifus
{
    static int rank; // Declared Static Variable `rank`

public:
    string name[100];
    string trait[100];

    static void setRank(int); // New Static Member Function!
    void setHer();
    void getHer(int);
    void getThem();
};

int Waifus::rank; // Will automatically be taken care of!

void Waifus::setRank(int r)
{
    rank = r;
}

void Waifus::setHer()
{
    rank++;

    cout << "\nEnter your Waifus name having rank " << rank << " : ";
    getline(cin, name[rank]);
    cout << "Why do you like her?" << endl;
    getline(cin, trait[rank]);
}

void Waifus::getHer(int her_rank)
{
    cout << "\nYour favorite waifu having rank " << her_rank << " is: " << name[her_rank] << endl;
    cout << "You like her because of her " << trait[her_rank] << "!" << endl;
}

void Waifus::getThem()
{
    cout << "\nYour favorite waifu having rank " << rank << " is: " << name[rank] << endl;
    cout << "You like her because of her " << trait[rank] << "!" << endl;
}

int main()
{
    Waifus favGirls[3];

    for (int i = 0; i < 3; i++)
    {
        favGirls[i].setHer();
    }

    for (int i = 0; i < 3; i++)
    {
        favGirls[i].getHer(i + 1);
    }

    // Another way to get all waifus with their traits and not to pass any arguments in `getHer()`
    for (int idx = 0; idx < 3; idx++)
    {
        Waifus::setRank(idx + 1);
        favGirls[idx].getThem();
    }

    return 0;
}