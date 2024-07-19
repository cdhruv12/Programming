#include <iostream>
using namespace std;

class student
{
    public:
    int roll_no;
    char name[100];
    float marks[5];
};
int main()
{
    float sum = 0.0, a;
    float percentage ;
    class student s1;

    cout<<"ENTER ROLL No.    :";
    cin>>s1.roll_no;
    cout<<"ENTER NAME        :";
    cin>>s1.name;
    
    for(int i=0; i<5; i++)
    {
        cout<<"ENTER MARK OF SUBJECT "<<i+1<<"-->";
        cin>>s1.marks[i+1];
    }
    cout<<"\n";
    
    for(int i=0; i<5; i++)
    {
        sum = sum + s1.marks[i+1];
    }
    cout<<"TOTAL MARKS --->"<<sum<<endl;

    a = sum / 500;
    percentage =  a*100;
    
    cout<<"PERCENTAGE -->"<<percentage;
    
 
}