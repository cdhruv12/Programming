#include <iostream>
using namespace std;
int pow(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int a, b, answer;
    cin >> a >> b;
    answer = pow(a, b);
    cout << "Answer is " << answer << endl;
    int c, d;
    cin >> c >> d;
    answer = pow(c, d);
    cout << "Answer is " << answer << endl;
    return 0;
}