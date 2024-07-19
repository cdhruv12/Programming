#include <iostream>
using namespace std;
int main()
{
    float b, a, d, n;
    cout << "Enter basic salary:";
    cin >> b;
    cout << "Enter Percentage of Alloance:";
    cin >> a;
    cout << "Enter Percentage of Deduction:";
    cin >> d;
    n = b + b * a - b * d;
    cout << "Net Salary is " << n;
    return 0;
}