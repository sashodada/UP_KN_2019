#include <iostream>
using namespace std;

int fibonacciNaive(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }

    return fibonacciNaive(n - 1) + fibonacciNaive(n - 2);
}

int fibonacciTail(int n, int prev, int prePrev)
{
    if(n == 0 || n == 1) 
    {
        return prev;
    }

    return fibonacciTail(n - 1, (prePrev + prev), prev);
}

int fibonacciMem(int n, int *mem)
{
    if(n == 0 || n == 1)
    {
        return n;
    }

    if(mem[n] != 0)
    {
        return mem[n];
    }
    mem[n] = fibonacciMem(n - 1, mem) + fibonacciMem(n - 2, mem);

    return mem[n];
}

int main() 
{
    int n;
    cin >> n;
    cout << fibonacciNaive(n);
    cout << endl;
    cout << fibonacciTail(n, 1, 0);
    cout << endl;

    int mem[1000];
    for(int i = 0; i < n + 1; i++)
    {
        // make all elements of mem array 0
        mem[i] = 0;
    }

    cout << fibonacciMem(n, mem);
    cout << mem[12];
}