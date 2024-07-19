#include <iostream>
using namespace std;
class A
{
private:
    int x, y;

public:
    void input()
    {
        cin >> x >> y;
    }
    void output()
    {
        cout << x << y << endl;
    }
    void add()
    {
        cout << x + y << endl;
    }
};
int main()
{
    A ob;
    ob.input();
    ob.output();
    ob.add();
    return 0;
}