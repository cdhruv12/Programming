#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c, d, e, f, g, h;
    cout << "Enter amount : " << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        x % 100 == a;
        x / 100 == b;
    case 2:
        a % 50 == c;
        a % 50 == d;
    case 3:
        c % 20 == e;
        c % 20 == f;
    case 4:
        e % 1 == g;
        e / 1 == h;
        break;
    }
    cout << "Total no. of Rs 100 notes  are : " << b << "\n"
         << "Total no. of Rs 50 notes are : " << d << "\n"
         << "Total no.s of Rs 20 notes are : " << f << "\n"
         << "Total no.s of Rs 1 notes are : " << h << endl;
    return 0;
}