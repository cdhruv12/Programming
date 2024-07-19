#include <iostream>
#include <string>
using namespace std;
class Person
{
    string name;
    int age;

public:
    Person()
    {
        name = "No_Name";
        age = 0;
    }
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    friend ostream &operator<<(ostream &output, Person &p);
    friend istream &operator>>(istream &input, Person &p);
};
ostream &operator<<(ostream &output, Person &p)
{
    output << "Yo guys" << endl;
    output << "Name is " << p.name << endl
           << "Age is " << p.age << endl;
    return output;
}
istream &operator>>(istream &input, Person &p)
{
    input >> p.name >> p.age;
    return input;
}
int main()
{
    cout << "Enter name & age : " << endl;
    Person d;
    cin >> d;
    cout << d;
    return 0;
}