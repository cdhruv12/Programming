#include <iostream>
using namespace std;
class stu
{
public:
    char name;
    int rollno;
    int m, p, c, s, e;
};
int main()
{
    stu t;
    cout << "Enter name : " << endl;
    cin >> t.name;
    cout << "Enter roll no. : " << endl;
    cin >> t.rollno;
    cout << "Enter Math marks : " << endl;
    cin >> t.m;
    cout << "Enter Physics marks : " << endl;
    cin >> t.p;
    cout << "Enter Chemistry marks : " << endl;
    cin >> t.c;
    cout << "Enter CS marks : " << endl;
    cin >> t.s;
    cout << "Enter English marks : " << endl;
    cin >> t.e;
    cout << "Name is " << t.name << endl;
    cout << "Roll no. is " << t.rollno << endl;
    int l = t.m + t.p + t.c + t.s + t.e;
    cout << "Total marks is " << l << endl;
    return 0;
}