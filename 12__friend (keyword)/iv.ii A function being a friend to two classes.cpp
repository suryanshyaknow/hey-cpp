#include <iostream>
#include <string>
using namespace std;

class Nami; // declaring class "Nami"

// Defining class "Rangiku"
class Rangiku
{
    string r;
    friend void swap(Rangiku &, Nami &);

public:
    Rangiku(string);
    void getHer();
};

Rangiku::Rangiku(string s)
{
    r = s;
}

void Rangiku::getHer()
{
    cout << "\nRangiku " + r;
}

// Defining class "Nami"
class Nami
{
    string n;
    friend void swap(Rangiku &, Nami &);

public:
    Nami(string);
    void getHer();
};

Nami::Nami(string s)
{
    n = s;
}

void Nami::getHer()
{
    cout << "\nNami " + n;
}

// Defining "friend" function `swap`
void swap(Rangiku &ra, Nami &na)
{
    string temp = ra.r;
    ra.r = na.n;
    na.n = temp;
}

int main()
{
    Rangiku rangiku("Matsumoto");
    Nami nami("Grover");

    // Before swap
    rangiku.getHer();
    nami.getHer();

    swap(rangiku, nami);

    // After swap
    rangiku.getHer();
    nami.getHer();

    return 0;
}