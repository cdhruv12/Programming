#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, Complex &c);
};
ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << " + i" << c.img << endl;
    return out;
}
int main()
{
    Complex c(3, 7);
    cout << c;
    operator<<(cout, c);
    return 0;
}