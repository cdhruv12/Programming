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
    int getLength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    Rectangle()
    {
        length = 0;
        breadth = 0;
        cout << "Default Constructor been called" << endl;
    }
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
        cout << "Prameterized Constructor is called" << endl;
    }
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
        cout << "Copy Constructor been called" << endl;
    }
};
int main()
{
    Rectangle r;
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getbreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimter is " << r.perimeter() << endl;
    cout << "****************************************" << endl;
    cout << "Normally" << endl;
    r.setLength(12);
    r.setBreadth(23);
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getbreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimter is " << r.perimeter() << endl;
    cout << "****************************************" << endl;
    Rectangle(34, 45);
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getbreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimter is " << r.perimeter() << endl;
    cout << "******************************************" << endl;
    Rectangle rec(r);
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getbreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimter is " << r.perimeter() << endl;
    return 0;
}