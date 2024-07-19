#include <iostream>
using namespace std;
int main()
{
    long int rno;
    cout << "Enter roll no.:";
    cin >> rno;
    if (rno > 1)
    {
        cout << "Valid roll no." << endl;
    }
    else
    {
        cout << "Invalid roll no." << endl;
    }
    return 0;
}