#include <iostream>
using namespace std;
class Rectangle
{
public:
    int l, b;
    int area()
    {
        return l * b;
    }
    int perimeter()
    {
        return 2 * (l + b);
    }
};
int main()
{
    Rectangle *ptr = new Rectangle();
    // Rectangle r1;
    // Rectangle *ptr;
    // ptr = &r1;
    ptr->l = 12;
    ptr->b = 23;
    cout << "Area of rectangle is " << ptr->area() << endl;
    cout << "Perimeter of rectangle is " << ptr->perimeter() << endl;
    return 0;
}