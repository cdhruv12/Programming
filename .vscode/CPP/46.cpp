#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing done" << endl;
}
int main()
{
    int arr[15] = {2, 3, 4, 5, 6, 7};
    printArray(arr, 10);
    return 0;
}