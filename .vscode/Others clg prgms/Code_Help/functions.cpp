#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            cout << "Invalid Data" << endl;
        }
    }
    void setBreadth(int b)
    {
        if (b >= 0)
        {
            breadth = b;
        }
        else
        {
            cout << "Invalid Data" << endl;
        }
    }
    int getLength();
    int getBreadth();
    int area();
    int perimeter();
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    bool isSquare();
    ~Rectangle();
};
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
Rectangle::Rectangle()
{
    length = 0;
    breadth = 0;
    cout << "Default constructor been called" << endl;
}
Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
    cout << "Parameterized constructor been called" << endl;
}
Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
    cout << "Copy Constructor been called" << endl;
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    cout << "Rectangle is destroyed" << endl;
}
int main()
{
    Rectangle r;
    cout << "Lenght is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    if (r.isSquare())
    {
        cout << "Yes it is a square" << endl;
    }
    else
    {
        cout << "No it is not a square" << endl;
    }
    cout << "*************************************" << endl;
    r.setLength(12);
    r.setBreadth(23);
    cout << "Lenght is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    if (r.isSquare())
    {
        cout << "Yes it is a square" << endl;
    }
    else
    {
        cout << "No it is not a square" << endl;
    }
    cout << "*************************************" << endl;
    Rectangle(34, 45);
    cout << "Lenght is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    if (r.isSquare())
    {
        cout << "Yes it is a square" << endl;
    }
    else
    {
        cout << "No it is not a square" << endl;
    }
    cout << "*************************************" << endl;
    Rectangle rect(r);
    cout << "Lenght is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    if (r.isSquare())
    {
        cout << "Yes it is a square" << endl;
    }
    else
    {
        cout << "No it is not a square" << endl;
    }
    return 0;
}