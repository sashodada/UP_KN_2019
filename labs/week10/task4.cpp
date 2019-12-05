#include <iostream>
using namespace std;

void printArray(int i, int arr[])
{
    if(i < 0)
    {
        return;
    }

    printArray(i - 1, arr);
    cout << arr[i] << " ";
}

void printArrayRev(int i, int arr[])
{
    if(i < 0)
    {
        return;
    }

    cout << arr[i] << " ";
    printArrayRev(i - 1, arr);
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int len = 11;
    printArray(len - 1, arr);
    cout << endl;
    printArrayRev(len - 1, arr);
}