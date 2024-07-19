#include <iostream>
using namespace std;
class dis
{
public:
    float feet1;
    float inches1;
    float feet2;
    float inches2;
    float res1, res2;
    void input()
    {
        cout << "Enter distance 1 in feet:" << endl;
        cin >> feet1;
        cout << "Enter distance 1 in inches:" << endl;
        cin >> inches1;
        cout << "Enter diatance 2 in feet:" << endl;
        cin >> feet2;
        cout << "Enter distance 2 in inches:" << endl;
        cin >> inches2;
    }
    void Add()
    {
        res1 = feet1 + feet2;
        res2 = inches1 + inches2;
    }
    void output()
    {
        cout << "Addition of 2 distances is " << res1 << " feet and " << res2 << " inches" << endl;
    }
};
int main()
{
    dis ob;
    ob.input();
    ob.Add();
    ob.output();
    return 0;
}