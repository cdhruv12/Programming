#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    while (num == 1)
    {
        switch (num)
        {
        case 1:
            cout << "num is " << num << endl;
            break;

        default:
            break;
        }
        exit(num);
    }
    return 0;
}