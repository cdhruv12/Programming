#include <iostream>
using namespace std;
int main()
{
    int num = 2; // you can put here 1 or 2 or any other no. to check the ccondition
    cout << endl;
    switch (num)
    {
    case 1:
        cout << "First case" << endl;
        break;
    case 2:
        cout << "Second case" << endl;
        break;
    default:
        cout << "It is a defalut case" << endl;
        break;
    }
    return 0;
}