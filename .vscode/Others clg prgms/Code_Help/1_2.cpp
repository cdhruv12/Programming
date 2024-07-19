#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;

public:
    Distance()
    {
        feet = 0;
        inches = 4;
    }

    void readDistance(void)
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void dispDistance(void)
    {
        cout << "Feet:" << feet << "\t"
             << "Inches:" << inches << endl;
    }

    Distance operator+(Distance &dist1)
    {
        Distance tempD;
        tempD.inches = inches + dist1.inches;
        tempD.feet = feet + dist1.feet + (tempD.inches / 12);
        tempD.inches = tempD.inches % 12;
        return tempD;
    }
};

int main()
{
    Distance D1, D2, D3;
    Distance D4;

    cout << "Enter first  distance:" << endl;
    D1.readDistance();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.readDistance();
    cout << endl;

    D3 = D1 + D2;

    cout << "Total Distance:" << endl;
    D3.dispDistance();

    D2 = D4 + D1;
    cout << "Total Distance:" << endl;
    D2.dispDistance();

    cout << endl;

    return 0;
}