#include <iostream>
using namespace std;

const int MAX_LEN = 100;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    cout << " pivot: " << pivot << endl;
    int i = start;
    for(int j = start; j <= end; j++)
    {
        if(arr[j] < pivot)
        {
            swap(arr[i], arr[j]); // преместваме текущия от страната на тези по-малки от pivot
            i++;                  // изместваме границата на по-малките от pivot
        }
        cout << "i = " << i << " j = " << j << " ";
        for(int i = start; i <= end; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    swap(arr[i], arr[end]);
    return i;
}

void quickSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int p = partition(arr, start, end);
        quickSort(arr, start, p - 1); // извикваме рекурсивно върху първата част
        quickSort(arr, p + 1, end);   // извикваме рекурсивно върху втората част
    }
}

int main() 
{
    int arr[MAX_LEN];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);
    // partition(arr, 0, n-1);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}