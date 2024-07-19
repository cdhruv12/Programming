#include <iostream>
using namespace std;
int pow()
{
    int a, b, ans = 1;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    cout << "Answer is " << pow() << endl;
}