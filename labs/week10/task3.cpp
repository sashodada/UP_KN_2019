#include <iostream>
using namespace std;

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int sumStep(int n, int step, int current)
{
    if(current > n)
    {
        return 0;
    }

    return current + sumStep(n, step, current + step);
}

int main()
{
    int n, k;
    cin >> n >> k;    
    cout << sumStep(n, k, 1);
}