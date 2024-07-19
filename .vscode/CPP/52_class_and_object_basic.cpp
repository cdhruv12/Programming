#include <iostream>
using namespace std;
class student
{
public:
    int i;
    string name;
    string subname[10];
    int rollno;
    float marks[5];
    void input()
    {
        cout << "Enter the name of the student " << endl;
        cin >> name;
        cout << "Enter the roll no. of the student " << endl;
        cin >> rollno;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter Name of subject " << i + 1 << " :" << endl;
            cin >> subname[i];
            cout << "Enter " << subname[i] << "  marks :" << endl;
            cin >> marks[i];
        }
    }
    void output()
    {
        cout << "Name is " << name << endl;
        cout << "Roll No. is " << rollno << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks in Subject " << subname[i];
            cout << " " << marks[i] << endl;
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