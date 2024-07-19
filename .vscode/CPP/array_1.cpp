#include<iostream>
using namespace std;
int main()
{
    int A[3];
    cout << "Size of array A is " << sizeof(A) << endl;
    A[0] = 12;
    A[1] = 23;
    A[2] = 34;
    cout << "The values of array A is " << A[0]<<","<<A[1]<<","<<A[2]<<endl;
    return 0;
}