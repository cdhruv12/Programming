#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char arr[100];
    cout << "Enter name and age" << endl;
    cin.getline(arr, 100);
    ofstream myfile("xyz.txt", ios::app);
    myfile << arr;
    myfile.close();
    cout << "File write operation performed successfully" << endl;
    cout << "File reading operation started" << endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1, 100);
    cout << "Content of file : " << arr1 << endl;
    cout << "File reading operation performed succesfully" << endl;
    obj.close();
    return 0;
}