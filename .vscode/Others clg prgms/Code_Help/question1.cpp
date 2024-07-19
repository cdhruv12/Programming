#include <iostream>
using namespace std;
class Student
{
    int rollno;
    string name;
    int matmarks;
    int phymarks;
    int chemmarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        rollno = r;
        name = n;
        matmarks = m;
        phymarks = p;
        chemmarks = c;
    }
    int total()
    {
        return matmarks + phymarks + chemmarks;
    }
    char grade()
    {
        float average = total() / 3;
        if (average > 60)
        {
            return 'A';
        }
        else if (average > 40 && average < 60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
};
int main()
{
    int roll;
    string name;
    int m, p, c;
    cout << "Enter Roll number of Student:" << endl;
    cin >> roll;
    cout << "Enter Name of Student:" << endl;
    cin >> name;
    cout << "Enter marks in 3 subjects:" << endl;
    cin >> m >> p >> c;
    Student s(roll, name, m, p, c);
    cout << "Total marks:" << s.total() << endl;
    cout << "Grade of Student:" << s.grade() << endl;
    return 0;
}