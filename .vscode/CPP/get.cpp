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
};
int main()
{
    Hero ramesh;
    cout << "Health is : " << ramesh.getHealth() << endl;
    cout << "Level is : " << ramesh.getLevel() << endl;
    return 0;
}