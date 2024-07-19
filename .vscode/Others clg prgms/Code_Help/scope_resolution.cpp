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
    int area();
    int perimeter();
};
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
int main()
{
    Rectangle r;
    r.setLength(12);
    r.setBreadth(23);
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getbreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimter is " << r.perimeter() << endl;
    return 0;
}