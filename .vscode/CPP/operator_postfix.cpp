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
    void display()
    {
        cout << "marks is " << marks << endl;
    }
    Marks operator++(int)
    {
        Marks duplicate(*this);
        marks += 1;
        return duplicate;
    }
    friend Marks operator--(Marks &m, int);
};
Marks operator--(Marks &m, int)
{
    Marks duplicate(m);
    m.marks -= 1;
    return duplicate;
}
int main()
{
    Marks m1(60);
    m1.display();
    (m1++).display();
    m1.display();
    (m1--).display();
    m1.display();
    return 0;
}