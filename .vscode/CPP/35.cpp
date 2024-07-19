#include <iostream>
using namespace std;
int main()
{
    int num = 2;
    char ch = 'A';
    switch (ch)
    {
    case 1:
        cout << "It is 1" << endl;
        break;
    case 'A':
        cout << "It is character A" << endl;
        switch (num)
        {
        case 2:
            cout << "Value of num is " << num << endl;
            break;

        default:
            cout << "Default value" << endl;
            break;
        }
        break;
    default:
        cout << "Default value" << endl;
        break;
    }
    return 0;
}