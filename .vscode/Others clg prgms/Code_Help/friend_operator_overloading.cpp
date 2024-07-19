#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int img;
    friend Complex operator+(Complex C1, Complex C2);
};
Complex operator+(Complex C1, Complex C2)
{
    Complex temp;
    temp.real = C1.real + C2.real;
    temp.img = C1.img + C2.img;
    return temp;
}
int main()
{
    Complex C1, C2, C3;
    cout << "Enter real values:" << endl;
    cin >> C1.real >> C2.real;
    cout << "Enter img values:" << endl;
    cin >> C1.img >> C2.img;
    C3 = C1 + C2;
    cout << "Addition of C1 and C2 is " << C3.real << " + " << C3.img << "i" << endl;
    return 0;
}