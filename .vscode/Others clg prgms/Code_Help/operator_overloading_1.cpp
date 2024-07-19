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
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    void display()
    {
        cout << " " << real << " + "
             << " " << img << "i" << endl;
    }
};
int main()
{
    Complex C;
    int r, i;
    cout << "Enter real and img for C1" << endl;
    cin >> r >> i;
    Complex C1(r, i);
    cout << "Enter real and img for C2" << endl;
    cin >> r >> i;
    Complex C2(r, i);
    Complex C3;
    C3 = C1 + C2;
    cout << "Addition is ";
    C3.display();
    return 0;
}