#include <iostream>
#include <string>
using namespace std;

class Anime
{
private:
    /* data */
    string hentai; // Don't want it to be directly accessed outta the class!

public:
    string anime;
    string getHanime(); // declaring a function, will define it outside the class
    void setHanime()
    {
        cout << "Enter the hanime you might wanna set and fetch later: ";
        getline(cin, hentai); // `cin` won't work if characters separated by space are entered in the console!
    }
};

// Defining a member function outside the class
string Anime::getHanime()
{
    return hentai;
}

int main()
{
    Anime fav_anime;            // Instantiation
    fav_anime.anime = "Naruto"; // Member Variable
    fav_anime.setHanime();      // Member Function
    cout << "Enter you favourite hanime: " << fav_anime.getHanime() << endl;

    Anime disliked;
    disliked.anime = "Sense8";
    disliked.setHanime();
    cout << "Enter the hanime you disliked the most: " << disliked.getHanime() << endl;

    return 0;
}