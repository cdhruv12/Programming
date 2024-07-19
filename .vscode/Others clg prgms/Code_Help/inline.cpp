#include <iostream>
using namespace std;
class Test
{
public:
    void func1()
    {
        cout << "Inline function" << endl;
    }
    inline void func2();
};
void Test::func2()
{
    cout << "Not a Inline function" << endl;
}
int main()
{
    Test t;
    t.func1();
    t.func2();
    return 0;
}