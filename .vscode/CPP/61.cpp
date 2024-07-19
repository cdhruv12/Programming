#include <iostream>
using namespace std;
class rectangle
{
public:
    int l, b;
    void input()
    {
        cout << "Enter Length of rectangle:" << endl;
        cin >> l;
        cout << "Enter breadth of rectangle:" << endl;
        cin >> b;
    }
    void output()
    {
        cout << "Area of rectangle is " << l * b << endl;
        cout << "Perimeter of rectangle is " << 2 * (l + b) << endl;
    }
};
int main()
{
    rectangle ob;
    ob.input();
    ob.output();
    return 0;
}