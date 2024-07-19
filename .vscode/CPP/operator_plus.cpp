#include <iostream>
using namespace std;
class Marks
{
    int inmarks;
    int exmarks;

public:
    Marks()
    {
        inmarks = 0;
        exmarks = 0;
    }
    Marks(int im, int em)
    {
        inmarks = im;
        exmarks = em;
    }
    Marks operator+(Marks m)
    {
        Marks temp;
        temp.inmarks = inmarks + m.inmarks;
        temp.exmarks = exmarks + m.exmarks;
        return temp;
    }
    Marks operator-(Marks m)
    {
        Marks temp;
        temp.inmarks = inmarks - m.inmarks;
        temp.exmarks = exmarks - m.exmarks;
        return temp;
    }
    void display()
    {
        cout << "Internal marks : " << inmarks << endl
             << "External Marks : " << exmarks << endl;
    }
};
int main()
{
    Marks m1(10, 20), m2(30, 40);
    Marks m3 = m1 + m2;
    Marks m4 = m1 - m2;
    m3.display();
    m4.display();
    return 0;
}
