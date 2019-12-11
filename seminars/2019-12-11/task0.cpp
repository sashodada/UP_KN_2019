#include <iostream>
using namespace std;

int cost(int index)
{
    int costs[7] = { 1, 2, 5, 10, 20, 50, 100 };
    return costs[index];
}

void printPurchaseSum(int n, int a[7], int moneyAlreadySpent[7], int maxIndex)
{
    if (n == 0)
    {
        for (int i = 6; i >= 0; --i)
        {
            for (int j = 0; j < moneyAlreadySpent[i]; ++j)
            {
                cout << cost(i) << " ";
            }
        }
        cout << endl;
        return;
    }

    for (int i = maxIndex; i >= 0; --i)
    {
        if (cost(i) <= n && a[i] > 0)
        {
            a[i]--;
            moneyAlreadySpent[i]++;
            printPurchaseSum(n - cost(i), a, moneyAlreadySpent, i);
            moneyAlreadySpent[i]--;    
            a[i]++;
        }
    }

    return;
}

void printAllPurchaseSums(int n, int a[7])
{
    int moneyAlreadySpent[7] = { 0, 0, 0, 0, 0, 0 };
    int maxIndex = 6;
    printPurchaseSum(n, a, moneyAlreadySpent, maxIndex);
}

int main()
{
    int a[7] = { 2, 3, 5, 16, 2, 4, 0 };
    int n = 123;
    printAllPurchaseSums(n, a);
    return 0;
}