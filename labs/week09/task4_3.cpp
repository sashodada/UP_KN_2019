#include <iostream>
using namespace std;

const int MAX_LEN = 1000;

bool duplicates(long **pointers, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(**(pointers + i) == **(pointers + j)) 
            {
                return true;
            }
        }
    }

    return false;
}


// функция, която прави същото
bool duplicates2(long **pointers, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(*pointers[i] == *pointers[j]) 
            {
                return true;
            }
        }
    }

    return false;
}

int main() 
{
    int n;
    long arr[MAX_LEN];
    long* pointers[MAX_LEN]; // масив от указатели
    cout << "Enter n (n < 1000): ";
    cin >> n;

    cout << "Enter array elements: \n";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    // всеки указател ще сочи към елемент от arr
    for(int i = 0; i < n; i++) 
    {
        pointers[i] = &arr[i];
    }

    cout << "The array " << (duplicates(pointers, n) ? "has " : "doesn\'t have ") << "duplicates\n";

}