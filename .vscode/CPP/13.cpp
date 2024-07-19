#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 1st no.";
    cin >> a;
    cout << "Enter 2nd no.";
    cin >> b;
    if (a > b)
    {
        cout << "1st no. " << a << " is greater no." << endl;
    }
    else if (b > a)
    {
        cout << "2nd no. " << b << " is the greater no." << endl;
    }
    else
    {
        cout << "Both the no.s are same" << endl;
    }
}