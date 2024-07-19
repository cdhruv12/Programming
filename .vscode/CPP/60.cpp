#include <iostream>
using namespace std;
class factorial
{

    int n;
    int fact = 1;
    int i;

public:
    void get()
    {
        cout << "enter the no:";
        cin >> n;
    }

    void display();
};
void factorial::display()
{
    for (i = n; i > 1; i--)
    {
        fact = fact * i;
    }
    cout << "the factorial is:" << fact << endl;
}

int main()
{
    factorial ft;
    ft.get();
    ft.display();
    return 0;
}