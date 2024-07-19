#include <iostream>
using namespace std;
class Hero
{
public:
    Hero()
    {
        cout << "Default Constructor called" << endl;
    }
};
int main()
{
    cout << "Statically" << endl;
    Hero obj;
    cout << "Dynamically" << endl;
    Hero *h = new Hero;
    cout << "Done" << endl;
    return 0;
}