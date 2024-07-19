#include <iostream>
using namespace std;

class Series
{
    int num, i, sum;

public:
    Series()
    {
        num = 0;
        sum = 0;
    }
    Series(int x)
    {
        num = x;
        sum = 0;
    }
    Series(Series &x)
    {
        num = x.num;
        sum = 0;
    }
    void calculate();
    void display();
};
inline void Series::calculate()
{
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
}
inline void Series::display()
{
    cout << "\nValue of the Series : " << sum;
}
int main()
{
    int x;
    cout << "\n Enter the nth Value : ";
    cin >> x;

    Series se1(x);
    se1.calculate();
    se1.display();

    Series se2(se1);
    se2.calculate();
    se2.calculate();

    return 0;
}