#include <iostream>
#include <exception>
using namespace std;
int main()
{
    int numerator, denominator, result;
    cout << "Enter numerator and denominator :" << endl;
    cin >> numerator >> denominator;
    try
    {
        if (denominator == 0)
        {
            throw denominator;
        }
        result = numerator / denominator;
    }
    catch (int ex)
    {
        cout << "ERROR - Exception ; cannot devide by zero :( - " << ex << endl;
    }
    cout << "Division is " << result << endl;
    return 0;
}