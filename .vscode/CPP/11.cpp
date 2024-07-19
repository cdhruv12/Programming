#include <iostream>
using namespace std;
enum day
{
    mon = 10,
    tue,
    wed,
    thu = 67,
    fri,
    sat,
    sun
};
int main()
{
    day d;
    d = mon;
    cout << fri << endl;
    return 0;
}