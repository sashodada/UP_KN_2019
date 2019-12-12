#include <iostream> 
using namespace std;

const int MAX_LEN = 1000;

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
 * Слива масивите arr[start...middle] и arr[middle+1, end]
 */
void merge(int arr[], int start, int split, int end)
{
    int L[MAX_LEN]; // лява част
    int leftSize = split - start + 1;

    int R[MAX_LEN]; // дясна част
    int rightSize = end - split;

    // запълване на лявата част
    for(int i = 0; i < leftSize; i++)
    {
        L[i] = arr[start + i];
    }
    // запълване на дясната част
    for(int i = 0; i < rightSize; i++)
    {
        R[i] = arr[split + i + 1];
    }

    int li = 0; // променлива, итерираща по лявата част
    int ri = 0; // променлива, итерираща по дясната част
    int i = start;  // променлива, итерираща по arr

    while(li < leftSize && ri < rightSize)
    {
        if(L[li] <= R[ri])
        {
            arr[i] = L[li];
            li++;
        }
        else 
        {
            arr[i] = R[ri];
            ri++;
        }
        i++;
    }

    // вземане на останалите елементи от L, ако има такива
    while(li < leftSize)
    {
        arr[i] = L[li];
        li++;
        i++;
    }
    // вземаме останалите елементи от R, ако има такива
    while(ri < rightSize)
    {
        arr[i] = R[ri];
        ri++;
        i++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int middle = (end + start) / 2;

        mergeSort(arr, start, middle);
        mergeSort(arr, middle+1, end);

        merge(arr, start, middle, end);
    }
}

int main() 
{
    int arr[MAX_LEN];
    int n;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter " << n << (n == 1 ? " number " : " numbers ") << ":\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n-1);
    cout << "Sorted array: \n";
    print(arr, n);
}