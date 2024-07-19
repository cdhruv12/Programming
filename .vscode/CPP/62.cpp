#include <iostream>
using namespace std;
class rectangle
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
    rectangle r;
    rectangle *ptr;
    ptr = &r;
    ptr->l = 12;
    ptr->b = 12;
    cout << "Area " << ptr->area() << endl;
    cout << "Perimenter " << ptr->perimeter() << endl;
    return 0;
}