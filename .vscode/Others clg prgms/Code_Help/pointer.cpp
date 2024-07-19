#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimter()
    {
        return 2 * (length * breadth);
    }
};
int main()
{
    Rectangle r;
    Rectangle *p = &r;
    p->length = 12;
    p->breadth = 23;
    cout << "Area is " << p->area() << endl;
    cout << "Perimeter is " << p->perimter() << endl;
    return 0;
}