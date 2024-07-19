#include <iostream>
using namespace std;
void pass_by_ref(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
void pass_by_poi(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
int main()
{
    int a = 1, b = 2;
    cout << "Before swaping\na : " << a << "\nb : " << b << endl;
    // pass_by_ref(a, b);
    pass_by_poi(&a, &b);
    cout << "After swaping\na : " << a << "\nb : " << b << endl;
    return 0;
}