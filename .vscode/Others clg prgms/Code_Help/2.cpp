#include <iostream>
using namespace std;
class Parameterized
{
public:
    int health;
    Parameterized(int health)
    {
        cout << "this-->" << this << endl;
        this->health = health;
    }
    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health = h;
    }
};
int main()
{
    cout << "Statically" << endl;
    Parameterized obj(10);
    cout << "Address of obj " << &obj << endl;
    obj.getHealth();
    cout << "Dynamically" << endl;
    Parameterized *p = new Parameterized(12);
    return 0;
}