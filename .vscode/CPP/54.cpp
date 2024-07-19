#include <iostream>
using namespace std;
class start
{
public:
    string name;
    void input()
    {
        cout << "Enter your Name:" << endl;
        cin >> name;
    }
    void output()
    {
        cout << "Hello " << name << endl;
    }
};
int main()
{
    start ob;
    ob.input();
    ob.output();
    return 0;
}