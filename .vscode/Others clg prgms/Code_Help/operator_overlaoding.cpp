#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex Add(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};
int main()
{
    Complex C;
    Complex C1(1, 2);
    Complex C2(3, 4);
    Complex C3;
    C3 = C1.Add(C2);
    return 0;
}