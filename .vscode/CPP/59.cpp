#include <iostream>
using namespace std;
class ascii
{
public:
    char c;
    void input()
    {
        cout << "Enter character:" << endl;
        cin >> c;
    }
    void output()
    {
        cout << "ASCII value of character " << c << " is " << (int)c << endl;
    }
};
int main()
{
    ascii ob;
    ob.input();
    ob.output();
    return 0;
}