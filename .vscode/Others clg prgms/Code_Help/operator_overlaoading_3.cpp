#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int img;
    Complex operator-(Complex x)
    {
        Complex temp;
        temp.real = real - x.real;
        temp.img = img - x.img;
        return temp;
    }
};
int main()
{
    Complex C1, C2, C3;
    cout << "Enter C1 real:" << endl;
    cin >> C1.real;
    cout << "Enter C1 img:" << endl;
    cin >> C1.img;
    cout << "Enter C2 real:" << endl;
    cin >> C2.real;
    cout << "Enter C2 img:" << endl;
    cin >> C2.img;
    C3 = C1 - C2;
    cout << "Subtraction of C1 and C2 is " << C3.real << " - " << C3.img << "i" << endl;
    return 0;
}