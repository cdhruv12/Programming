#include <iostream>
using namespace std;

class Shape
{
protected:
    float dimension;

public:
    void Dimension()
    {
        cin >> dimension;
    }

    virtual float calculateArea() = 0;
};

class Square : public Shape
{
public:
    float calculateArea()
    {
        return dimension * dimension;
    }
};

class Circle : public Shape
{
public:
    float calculateArea()
    {
        return 3.14 * dimension * dimension;
    }
};

int main()
{
    Square square;
    Circle circle;

    cout << "Enter the side of the square : ";
    square.Dimension();
    cout << "\nArea of square : " << square.calculateArea() << endl;

    cout << "Enter the radius of the circle : ";
    circle.Dimension();
    cout << "\nArea of circle :" << circle.calculateArea() << endl;

    return 0;
}