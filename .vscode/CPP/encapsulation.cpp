#include <iostream>
using namespace std;
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee : AbstractEmployee
{
    string Company;
    int Age;

protected:
    string Name;

public:
    void setName(string name)
    {
        Name = name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    void setAge(int age)
    {
        if (age > 18)
        {
            Age = age;
        }
    }
    string getName()
    {
        return Name;
    }
    string getCompany()
    {
        return Company;
    }
    int getAge()
    {
        return Age;
    }
    void Intro()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age- " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got promotion!" << endl;
        }
        else
        {
            cout << Name << " sorry NO promtion:(" << endl;
        }
    }
    virtual void Work()
    {
        cout << Name << " checking mails,task backlogs,performing task" << endl;
    }
};
class Developer : public Employee
{
public:
    string Fav;
    Developer(string name, string company, int age, string fav) : Employee(name, company, age)
    {
        Fav = fav;
    }
    void Fixbug()
    {
        cout << Name << " fixed bug using " << Fav << endl;
    }
    void Work()
    {
        cout << Name << " is coding on " << Fav << endl;
    }
};
class Teacher : public Employee
{
public:
    string Subject;
    void Lessons()
    {
        cout << Name << " prepared " << Subject << " lessons" << endl;
    }
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work()
    {
        cout << Name << " teaching " << Subject << endl;
    }
};
int main()
{
    Developer d = Developer("Sam", "Amazon", 34, "C++");
    // d.Fixbug();
    // d.AskForPromotion();
    // d.Work();
    Teacher t = Teacher("Duke", "Cool School", 23, "History");
    // t.Lessons();
    // t.AskForPromotion();
    // t.Work();

    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();

    return 0;
}