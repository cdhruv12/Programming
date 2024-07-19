#include <iostream>
using namespace std;
int add(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}
int main()
{
    cout << "Addition of 1,2,3,4 is " << add(1, 2, 3, 4) << endl;
    cout << "Addition is " << add(1, 2) << endl;
    return 0;
}