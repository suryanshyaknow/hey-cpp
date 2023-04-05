#include <iostream>
#include <string>
using namespace std;

// #################### Templates with Multiple Parameters ##########################
/*
Suppose you are building a generic library for handling 2D geometric shapes. You want to create a template
class `Shape` that can handle shapes with different types of parameters (e.g., int, double, etc.) and has
a method to calculate the area of the shape.

You also want to support various types of 2D shapes such as rectangle, triangle, and circle. Each shape has
its own set of parameters (e.g., length and width for a rectangle, base and height for a triangle, radius for
a circle).

Your task is to design the `Shape` class and the corresponding classes for each shape. Make sure to use
templates with multiple parameters to allow for different types of parameters.
*/
enum shapeKind
{
    TRIANGLE,
    SQUARE,
    RECTANGLE,
    CIRCLE,
    PARALLELOGRAM
};

template <typename T1, typename T2, typename T3>
class Shape
{
    T1 s1;
    T2 s2;
    T3 area;
    shapeKind shape;

public:
    Shape(T1, T2, shapeKind); // triangle or rectangle specialization
    Shape(T1, shapeKind);     // square or circle specialization
    T3 getArea();
};

// triangle or rectangle specialization
template <typename T1, typename T2, typename T3>
Shape<T1, T2, T3>::Shape(T1 s1, T2 s2, shapeKind shape)
{
    this->shape = shape;
    if (this->shape == TRIANGLE || this->shape == RECTANGLE)
    {
        this->s1 = s1;
        this->s2 = s1;
    }

    else
    {
        throw invalid_argument("!!!Error: the type of shape entered is incorrect, ensure that you enter the correct shape type should you try again!!!");
    }
}

// square or circle specialization
template <typename T1, typename T2, typename T3>
Shape<T1, T2, T3>::Shape(T1 s, shapeKind shape)
{
    this->shape = shape;
    if (this->shape == SQUARE || this->shape == CIRCLE)
    {
        this->s1 = s;
    }
    else
    {
        throw invalid_argument("!!!Error: the type of shape entered is incorrect, ensure that you enter the correct shape type should you try again!!!");
    }
}

// defining `getArea` member function of template `Shape`
template <typename T1, typename T2, typename T3>
T3 Shape<T1, T2, T3>::getArea()
{
    if (shape == TRIANGLE)
    {
        area = this->s1 * this->s2 / 2;
        return area;
    }
    else if (shape == SQUARE)
    {
        area = this->s1 * this->s1;
        return area;
    }
    else if (shape == RECTANGLE)
    {
        area = this->s1 * this->s2;
        return area;
    }
    else if (shape == CIRCLE)
    {
        const double Pi = 22 / 7;
        area = Pi * this->s1 * this->s1;
        return area;
    }

    return 0;
}

int main()
{
    Shape<int, int, int> tri(18, 27, TRIANGLE);
    cout << "Area of the Triangle having height and base 18 and 27 units respectively: " << tri.getArea() << endl;

    Shape<double, int, double> circ(19.99, CIRCLE);
    cout << "Area of the Circle having the radii 19.99 units: " << circ.getArea() << endl;

    Shape<float, int, float> sq(19.99, SQUARE);
    cout << "Area of the Square having the side 19.99 units: " << sq.getArea() << endl;

    Shape<int, float, float> rect(26, 11.99, RECTANGLE);
    cout << "Area of the Rectangle having the length and width 26 and 11.99 units respectively: " << rect.getArea() << endl;

    Shape<int, int, float> pllgm(16, 19.87, PARALLELOGRAM);
    cout << "Area of the Parallelogram having the dissimilar sides 26 and 11.99 units respectively: " << rect.getArea() << endl;

    return 0;
}