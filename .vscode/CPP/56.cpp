#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll_no;
    int n;
    float marks[10];
    float total = 0;
    void input()
    {
        cout << "Enter name:" << endl;
        cin >> name;
        cout << "Enter roll no.:" << endl;
        cin >> roll_no;
        cout << "Enter total no. of subjects:" << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter Marks in subject " << i + 1 << endl;
            cin >> marks[i];
            total = total + marks[i];
        }
    }

    void output()
    {
        cout << "Name:" << name << endl;
        cout << "Roll No.:" << roll_no << endl;
        cout << "Total Marks:" << total << endl;
        cout << "Percentage :" << (total * 100) / (n * 100) << "%" << endl;
    }
};
int main()
{
    student ob;
    ob.input();
    ob.output();
    return 0;
}