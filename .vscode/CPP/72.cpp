#include <iostream>
using namespace std;
class Hero
{
public:
    int health;
    char level;
    void print()
    {
        cout << level << endl;
    }
    void sethealth(int h)
    {
        health = h;
    }
    int gethealth()
    {
        return health;
    }
    void setlevel(int l)
    {
        level = l;
    }
    char getlevel()
    {
        return level;
    }
};
int main()
{
    Hero ramesh;
    ramesh.sethealth(12);
    ramesh.setlevel('A');
    cout << "Size of Ramesh is " << sizeof(ramesh) << endl;
    // ramesh.health = 12;
    // ramesh.level = 'A';
    //  void print();
    cout << "Health is " << ramesh.gethealth() << endl;
    cout << "Level is " << ramesh.getlevel() << endl;
    return 0;
}