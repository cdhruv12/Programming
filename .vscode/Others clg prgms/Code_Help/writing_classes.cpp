#include <iostream>
using namespace std;
class Rectangle
{
public:
    float length, breadth;
    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1, r2;
    r1.length = 12.23;
    r1.breadth = 23.34;
    cout << "Area of r1 : " << r1.area() << endl;
    cout << "Perimterof r1 : " << r1.perimeter() << endl;
    r2.length = 45.56;
    r2.breadth = 67.78;
    cout << "Area of r2 : " << r2.area() << endl;
    cout << "Perimterof r2 : " << r2.perimeter() << endl;
}