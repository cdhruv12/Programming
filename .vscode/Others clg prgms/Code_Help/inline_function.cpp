#include <iostream>
using namespace std;
class Test
{
public:
    void fun()
    {
        cout << "Inline Function" << endl;
    }
    inline void func()
    {
        cout << "This is also a inline Function" << endl;
    }
    void funct();
};
void Test::funct()
{
    cout << "Not inline function" << endl;
}
int main()
{
    Test t;
    t.fun();
    t.func();
    t.funct();
    return 0;
}