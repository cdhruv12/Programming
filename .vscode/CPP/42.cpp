#include <iostream>
using namespace std;
int isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "No. is even" << endl;
    }
    else
    {
        cout << "No. is odd" << endl;
    }
    return 0;
}