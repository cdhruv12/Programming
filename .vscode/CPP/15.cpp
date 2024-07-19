#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter numerator:";
    cin >> a;
    cout << "Enter denominator:";
    cin >> b;
    if (b == 0)
    {
        cout << "Cannot divide" << endl;
    }
    else
    {
        cout << a / b << endl;
    }
    return 0;
}