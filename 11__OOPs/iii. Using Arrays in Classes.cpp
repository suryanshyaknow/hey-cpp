#include <iostream>
#include <string>
using namespace std;


class Waifus
{
    int rank; // by default "private"

public:
    string name[100];
    string trait[100];

    void initRank(int);
    void setHer();
    void getHer();
};

void Waifus::initRank(int her_rank)
{
    rank = her_rank;
}

void Waifus::setHer()
{
    cout << "\nEnter your Waifus name having rank " << rank << " : ";
    getline(cin, name[rank]);
    cout << "Why do you like her?" << endl;
    getline(cin, trait[rank]);

    rank++;
}

void Waifus::getHer()
{
    for (int idx = 1; idx < rank; idx++)
    {
        cout << "\nYour favorite waifu having rank " << idx << " is: " << name[idx] << endl;
        cout << "You like her because of her " << trait[idx] << "!" << endl;
    }
}

int main()
{
    Waifus favGirl;

    favGirl.initRank(1); // Initialized the rank as '1'
    for (int i = 0; i < 3; i++)
    {
        favGirl.setHer(); // Setting your favorite waifu 1 at a time
    }
    favGirl.getHer(); // Getting all your favorite waifus and their traits

    cout << favGirl.name[3] << endl;
    return 0;
}