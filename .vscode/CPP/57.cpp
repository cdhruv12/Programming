#include <iostream>
using namespace std;
class complex
{
public:
    float real[100], img[100];
    int n;
    void input()
    {
        cout << "Enter no. of elements:" << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter real value:" << endl;
            cin >> real[i];
            cout << "Enter imaginary value:" << endl;
            cin >> img[i];
        }
    }
    void output()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Complex no. " << i + 1 << " is " << real[i] << "+" << img[i] << "j" << endl;
        }
    }
};
int main()
{
    complex ob;
    ob.input();
    ob.output();
    return 0;
}