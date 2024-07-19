#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char arr[100];
    cout << "Enter name & roll no. : " << endl;
    cin.getline(arr, 100);
    ofstream myfile("ABC.txt", ios::app);
    if (myfile.is_open())
    {
        myfile << arr;
    }
    else
    {
        myfile.open("ABC.txt");
        myfile << arr;
    }
    myfile.close();
    cout << "File write operation performed successfully" << endl;
    cout << "File read operation started" << endl;
    char arr1[100];
    ifstream newfile("ABC.txt");
    newfile.getline(arr1, 100);
    cout << "File content " << arr << endl;
    cout << "FIle read operation performed succesfully" << endl;
    return 0;
}
