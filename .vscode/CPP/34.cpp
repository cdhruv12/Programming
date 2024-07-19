#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    switch (ch)
    {
    case 1:
        cout << "It prints a integer" << endl;
        break;
    case 'A':
        cout << "It prints a character" << endl;
        break;
    default:
        cout << "It is a default statment" << endl;
        break;
    }
    return 0;
}