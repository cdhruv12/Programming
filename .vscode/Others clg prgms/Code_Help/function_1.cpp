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
    Rectangle(Rectangle &rect);
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
    cout << "Default  constructor called" << endl;
}
Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
    cout << "Parameterized constructor called" << endl;
}
Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
    cout << "Copy constructor called" << endl;
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    cout << "Destructor called" << endl;
}
int main()
{
    Rectangle r;
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    if (r.isSquare())
    {
        cout << "It is a square" << endl;
    }
    else
    {
        cout << "It is not a sqaure" << endl;
    }
    cout << "****************************************" << endl;
    r.setLength(1);
    r.setBreadth(2);
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    if (r.isSquare())
    {
        cout << "It is a square" << endl;
    }
    else
    {
        cout << "It is not a sqaure" << endl;
    }
    cout << "****************************************" << endl;
    Rectangle(3, 4);
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    if (r.isSquare())
    {
        cout << "It is a square" << endl;
    }
    else
    {
        cout << "It is not a sqaure" << endl;
    }
    cout << "****************************************" << endl;
    Rectangle rect(r);
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    if (r.isSquare())
    {
        cout << "It is a square" << endl;
    }
    else
    {
        cout << "It is not a sqaure" << endl;
    }
    return 0;
}