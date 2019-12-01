#include <iostream>
using namespace std;

const int MAX_LEN = 1000;

void swapElements(int *arr1, int *arr2, int n) 
{
    for(int i = 0; i < n; i++)
    {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp; 
    }
}

int main() 
{
    int n;
    int arr1[MAX_LEN], arr2[MAX_LEN];
    cout << "Enter n (n < 1000): ";
    cin >> n;

    cout << "Enter first array elements: \n";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr1[i];
    }

    cout << "Enter second array elements: \n";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr2[i];
    }

    swapElements(arr1, arr2, n); // call swap function

    cout << "After swap \n";
    cout << "First array elements\n";
    for(int i = 0; i < n; i++) 
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Second array elements\n";
    for(int i = 0; i < n; i++) 
    {
        cout << arr2[i] << " ";
    }
}