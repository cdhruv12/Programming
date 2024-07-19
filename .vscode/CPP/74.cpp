#include <iostream>
using namespace std;
class Hero
{
public:
    int health;
    char level;
    static int timeTocomplete;
    Hero()
    {
        cout << "Default construtor is called" << endl;
    }
    Hero(Hero &rem)
    {
        cout << "Copy constructore is called" << endl;
        health = rem.health;
        level = rem.level;
    }
    ~Hero()
    {
        cout << "Destructor is called" << endl;
    }
};
int Hero::timeTocomplete = 12;
int main()
{
    cout << "Start" << endl;
    Hero obj;
    cout << "Stop" << endl;
    cout << "---------------Dynamically-------------" << endl;
    Hero *b = new Hero;
    Hero r;
    r.health = 12;
    r.level = 'D';
    Hero r1(r);
    cout << "Health is " << r1.health << endl;
    cout << "Level is " << r1.level << endl;
    Hero s;
    s.health = 12;
    s.level = 'E';
    cout << "Health : " << s.health << endl;
    cout << "Level : " << s.level << endl;
    Hero X;
    X.health = s.health;
    X.level = s.level;
    cout << "Health : " << X.health << endl;
    cout << "Level : " << X.level << endl;
    // Static:
    Hero a;
    // Dynamic:
    Hero *j = new Hero();
    delete j;
    cout << Hero::timeTocomplete << endl;
    return 0;
}