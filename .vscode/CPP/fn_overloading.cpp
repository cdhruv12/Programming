#include <iostream>
using namespace std;
int add()
{
    cout << "Function 1 called" << endl;
    return 0;
}
int add(int a, int b)
{
    cout << "Function 2 called" << endl;
    return (a + b);
}
double add(double a, double b)
{
    cout << "Function 3 called" << endl;
    return (a + b);
}
int add(int a, int b, int c)
{
    cout << "Function 4 called" << endl;
    return (a + b + c);
}
double add(double a, int b)
{
    cout << "Function 5 called" << endl;
    return (a + b);
}
double add(int a, double b)
{
    cout << "Function 6 is called" << endl;
    return (a + b);
}
int main()
{
    cout << "Addition" << add() << endl;
    cout << "Addition is " << add(1, 2) << endl;
    cout << "Addition is " << add(1.2, 3.4) << endl;
    cout << "Addition is " << add(1, 2, 3) << endl;
    cout << "Addition is " << add(1.2, 3) << endl;
    cout << "Addition is " << add(1, 2.3) << endl;
    return 0;
}