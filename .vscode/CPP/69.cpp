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
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length * breadth);
    }
};
int main()
{
    Rectangle r;
    r.setLength(12);
    r.setBreadth(23);
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Breadth is " << r.perimeter() << endl;
    return 0;
}