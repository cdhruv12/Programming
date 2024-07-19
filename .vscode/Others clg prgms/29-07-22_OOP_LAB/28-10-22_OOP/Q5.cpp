#include <iostream>
using namespace std;
class Student
{
public:
    int roll;
};
class Test : virtual public Student
{
public:
    int marks1, marks2;
    Test(int m1, int m2)
    {
        marks1 = (m1);
        marks2 = (m2);
    }
    void show()
    {
        cout << "Marks obtained: " << marks1 << " & " << marks2 << endl;
    }
};
class Sports : virtual public Student
{
public:
    int score;
    Sports(int s) : score(s) {}
    void show()
    {
        cout << "Marks in sports: " << score << endl;
    }
};
class Result : public Test, Sports
{
public:
    Result(int r, int m1, int m2, int s) : Test(m1, m2), Sports(s)
    {
        roll = r;
    }
    void show()
    {
        cout << "Roll No.: " << roll << endl;
        Test::show();
        Sports::show();
        cout << "Total Marks : " << marks1 + marks2 + score << endl;
        int p = ((marks1 + marks2 + score) * 100) / 300;
        cout << "Percentage : " << p << "%" << endl;
    }
};
int main()
{
    int roll, m1, m2, s1;
    cout << "Enter Roll No.: " << endl;
    cin >> roll;
    cout << "Enter marks 1 marks: " << endl;
    cin >> m1;
    cout << "Enter marks 2 marks: " << endl;
    cin >> m2;
    cout << "Enter Sports marks: " << endl;
    cin >> s1;
    Result *r = new Result(roll, m1, m2, s1);
    r->show();
    return 0;
}