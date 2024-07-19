#include<iostream>
using namespace std;
class student
{

    public:
    int roll;
    char name[20];
    void input();
    void display();
};
void student::input()
{
    cout<<"name";
    gets(name);
    cout<<"rollno:";
    cin>>roll;

}
void student::display()
{
    cout<<"name:"<<name<<endl;
    cout<<"Rollno:"<<roll<<endl;
}
int main()
{
    student D;
    D.input();
    D.display();
    return 0;
}
