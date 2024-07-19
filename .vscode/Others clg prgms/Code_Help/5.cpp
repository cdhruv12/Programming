#include <iostream>
using namespace std;

class Time
{
    int h, m;

public:
    void getdetails(void)
    {
        cout << "Enter Time: ";
        cin >> h >> m;
    }
    void display()
    {
        cout << "The Time is " << h << "hr and " << m << "min.\n";
    }
    void operator==(Time d)
    {
        if (h == d.h && m == d.m)
            cout << "Time are equal.\n";
        else
            cout << "Time is not equal.\n";
    }
};
int main()
{
    Time t1, t2;
    t1.getdetails();
    t2.getdetails();
    t1 == t2;

    return 0;
}