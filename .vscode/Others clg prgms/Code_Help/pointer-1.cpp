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
    Rectangle *ptr = new Rectangle;
    ptr->length = 12;
    ptr->breadth = 23;
    cout << "Area " << ptr->area() << endl;
    cout << "Perimter " << ptr->perimter() << endl;
    return 0;
}