#include <iostream>
using namespace std;
template <typename T, typename U>
U add(T x, U y)
{
    return (x + y);
}
int main()
{
    cout << "Addition of 2 & 3.45 is " << add<int, double>(2, 3.45) << endl;
    // cout << "Addition float  of 2.3 & 3.4 is " << add<float>(2.3f, 3.4f) << endl;
    // cout << "Addition double of 2.12 & 3.23 is " << add<double>(2.12, 3.23) << endl;
    return 0;
}