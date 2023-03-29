#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    float x, y;

public:
    Point(float a, float b)
    {
        x = a;
        y = b;
    }
    friend ostream &operator<<(ostream &out, const Point &p); // Overloading the 'stream insertion' operator
    friend float distance(Point, Point);
};

// Defining 'stream insertion' operator
ostream &operator<<(ostream &out, const Point &p)
{
    out << "(" << p.x << ", " << p.y << ")" << endl;
    return out;
}

// Create a function to compute the distance between two co-ordinates.
float distance(Point a, Point b)
{
    float d;
    d = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
    return d;
}

int main()
{
    Point A(12, 27);
    cout << "Co-ordinate A: " << A << endl;

    Point B(19, 13);
    cout << "Co-ordinate B: " << B << endl;

    float d = distance(A, B);
    cout << "The distance between the co-ordinates A and B is: " << d << endl;

    float d1 = distance(Point(1, 1), Point(1, 1));
    cout << "\nThe distance between the co-ordinates (1, 1) and (1, 1) is: " << d1 << endl;

    float d2 = distance(Point(0, 1), Point(0, 6));
    cout << "\nThe distance between the co-ordinates (0, 1) and (0, 6) is: " << d2 << endl;

    float d3 = distance(Point(1, 0), Point(70, 0));
    cout << "\nThe distance between the co-ordinates (1, 0) and (70, 0) is: " << d3 << endl;

    return 0;
}