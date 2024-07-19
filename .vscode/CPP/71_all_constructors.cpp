#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        if (l < 0)
        {
            cout << "ERROR" << endl;
        }
        else
            length = l;
    }
    void setBreadth(int b)
    {
        if (b < 0)
        {
            cout << "ERROR" << endl;
        }
        else
            breadth = b;
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
    Rectangle() // Non Perimterarized or default
    {
        length = 1;
        breadth = 1;
    }
    Rectangle(int l, int b) // Perimterized
    {
        setLength(l);  // or length=l
        setBreadth(b); // or breadth=b;
    }
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }
};
int main()
{
    // Rectangle r;
    //  r.setLength(12);
    //  r.setBreadth(23);
    Rectangle r(12, 23);
    Rectangle r1(r);
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getbreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    return 0;
}