#include <iostream>

using namespace std;
class Hero
{
    int health;
    char level;

public:
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char l)
    {
        level = l;
    }
};

int main()
{
    Hero ramesh;
    ramesh.setHealth(12);
    ramesh.setLevel('A');
    cout << "Health is : " << ramesh.getHealth() << endl;
    cout << "Level is : " << ramesh.getLevel() << endl;
    return 0;
}