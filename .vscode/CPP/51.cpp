#include <iostream>
using namespace std;
class student
{
public:
    string name[5];
    int rollno[5];
    float marks[5]; // dhruv chauhan
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Name:" << endl;
            cin >> name[i];
            cout << "Enter rollno:" << endl;
            cin >> rollno[i];
            cout << "Enter marks:" << endl;
            cin >> marks[i];
        }
    }
    void output()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Name:" << name[i] << endl;
            cout << "Roll no.:" << rollno[i] << endl;
            cout << "Marks:" << marks[i] << endl;
        }
    }
};
int main()
{
    student ob;
    ob.input();
    ob.output();
    return 0;
}