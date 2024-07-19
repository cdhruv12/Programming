#include <iostream>
using namespace std;
class Distance
{
    int meters;

public:
    Distance()
    {
        meters = 0;
    }
    void display()
    {
        cout << "Meters : " << meters << endl;
    }
    friend void add(Distance &d);
};
void add(Distance &d)
{
    d.meters = d.meters + 5;
}
int main()
{
    Distance d1;
    d1.display();
    add(d1);
    d1.display();
    return 0;
}