#include <iostream>
using namespace std;
class Parent1
{
public:
    Parent1()
    {
        cout << "First: Parent1 class constructor." << endl;
    }
    ~Parent1()
    {
        cout << "Third: ressParent1 class destructor." << endl;
    }
};
class Parent2
{
public:
    Parent2()
    {
        cout << "Second: Parent2 class constructor." << endl;
    }
    ~Parent2()
    {
        cout << "Second: Parent2 class destructor." << endl;
    }
};
class derived : public Parent1, public Parent2
{
public:
    derived()
    {
        cout << "Third: derived class constructor." << endl;
    }
    ~derived()
    {
        cout << "First: derived class destructor." << endl;
    }
};
int main()
{
    derived d;
    return 0;
}