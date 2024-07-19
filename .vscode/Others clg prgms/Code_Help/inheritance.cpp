#include <iostream>
using namespace std;
class Base
{
public:
    int x;
    void display()
    {
        cout << x << endl;
    }
};
class Derived : public Base
{
public:
    int y;
    void show()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    Base b;
    b.x = 12;
    b.display();
    Derived d;
    d.x = 23;
    d.y = 34;
    d.display();
    d.show();
    return 0;
}