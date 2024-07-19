#include <iostream>
using namespace std;
class student
{
public:
    string name;
    string roll_no;
    int n, s;
    int no_of_sub;
    string sub_name;
    float marks[10];
    float p[10];
    int sum = 0;
    void input()
    {
        cout << "Enter total no. of students:" << endl;
        cin >> n;
        cout << "Enter no. of subjects:" << endl;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter Name of student " << i + 1 << " :" << endl;
            cin >> name[i];
            cout << "Enter Roll No. of the student " << i + 1 << " :" << endl;
            cin >> roll_no[i];
            for (int j = 0; j < s; j++)
            {
                int marks = 0;
                cout << "Enter subject name :" << endl;
                cin >> sub_name[j];
                cout << "Enter Marks in " << sub_name[j] << endl;
                cin >> marks;
                p[i] = (sum * 100) / (s * 100);
            }
        }
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Name is " << name[i] << endl;
            cout << "Roll no. is " << roll_no[i] << endl;
            for (int j = 0; j < s; j++)
            {
                cout << "Percentage is " << p[j] << "%" << endl;
                cout << "Total marks is " << sum << endl;
            }
        }
    }
};
int main()
{
    student ob;
    ob.input();
    return 0;
}