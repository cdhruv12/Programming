#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c";
    cin>>c;
    float r1=((-b)+sqrt(b*b-4*a*c))/2*a;
    float r2=((-b)-sqrt(b*b-4*a*c))/2*a;
    cout<<"Roots of the quadritic eq. is  "<<r1<<" and "<<r2;
    return 0;
}