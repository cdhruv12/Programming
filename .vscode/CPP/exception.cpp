#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a and b : " << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            c = a / b;
            cout << "Result is " << c << endl;
        }
    }
    catch (int x)
    {
        cout << "ERROR cannot divide by " << x << endl;
    }
    return 0;
}