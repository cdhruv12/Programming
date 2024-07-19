#include <iostream>
using namespace std;
class Hero
{
public:
    int health;
    char level;
};
int main()
{
    Hero ramesh;
    ramesh.health = 12;
    ramesh.level = 'A';
    cout << "Health is : " << ramesh.health << endl;
    cout << "lavel is : " << ramesh.level << endl;
    return 0;
}