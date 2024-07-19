#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 1st no. " << endl;
    cin >> a;
    cout << "Enter 2nd no. " << endl;
    cin >> b;
    char op;
    cout << "Enter operation to be performed " << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Addition of the no.s is " << a + b << endl;
        break;
    case '-':
        cout << "Subtraction of the no.s is " << a - b << endl;
        break;
    case '*':
        cout << "Multiplication of the no.s is " << a * b << endl;
        break;
    case '%':
        cout << "Mod of the no.s is " << a % b << endl;
        break;
    case '/':
        cout << "Division of the no.s is " << a / b << endl;
        break;
    default:
        cout << "Operator is not valid" << endl;
        break;
    }
    return 0;
}