#include <iostream>
using namespace std;
class Circle
{
    int a, c;

public:
    void input()
    {
        cout << "Enter radius:" << endl;
        cin >> a;
    }
    void cal()
    {
        c = 3.14 * a * a;
    }
    void display()
    {
        cout << "Area of circle " << c << endl;
    }
};
int main()
{
    Circle ob;
    ob.input();
    ob.cal();
    ob.display();
    return 0;
}