#include <iostream>
using namespace std;

void print(int n)
{
    if(n < 0) // база
    {
        return;
    }
    print(n - 1);
    cout << n << " ";
}

void printReverse(int n)
{
    if(n < 0) // база
    {
        return;
    }
    cout << n << " ";
    printReverse(n - 1);
}


int main() 
{
    int n;
    cin >> n;
    print(n);
    cout << endl << "Reverse " << endl;
    printReverse(n);
}