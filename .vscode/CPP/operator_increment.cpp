#include <iostream>
using namespace std;
class Marks
{
    int marks;

public:
    Marks()
    {
        marks = 0;
    }
    Marks(int m)
    {
        marks = m;
    }
    void display_content()
    {
        cout << "Your marks is " << marks << endl;
    }
    Marks operator++()
    {
        marks += 1;
        return marks;
    }
    friend Marks operator--(Marks &m);
};
Marks operator--(Marks &m)
{
    m.marks -= 1;
    return m;
}
int main()
{
    Marks m1(60);
    m1.display_content();
    (++m1).display_content();
    (--m1).display_content();
    return 0;
}