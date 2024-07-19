#include <iostream>
using namespace std;
class Hero
{
    int health;

public:
    char name;
    void sethealth(int h)
    {
        health = h;
    }
    int gethealth()
    {
        return health;
    }
};
int main()
{
    cout << "-----------Statically------------" << endl;
    Hero obj;
    obj.sethealth(12);
    obj.name = 'R';
    cout << "Health is " << obj.gethealth() << endl;
    cout << "Level is " << obj.name << endl;
    cout << "-------------Dynamically-----------" << endl;
    Hero *b = new Hero;
    b->sethealth(23);
    b->name = 'B';
    cout << "Health is " << b->gethealth() << endl;
    cout << "Name is  " << b->name << endl;
    return 0;
}