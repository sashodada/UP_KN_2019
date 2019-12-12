#include <iostream>
#include <cmath>
using namespace std;

int fact(int a)
{
    if(a == 0)
    {
        return 1.0;
    }
    return a * fact(a - 1);
}

int main()
{
    int n, x;
    cin >> x >> n;
    double sum = 1;
    cout << x << n << endl;
    for(int i = 1; i <= n; i++)
    {
        double part = pow(x, i)/fact(i);
        cout << part << endl;
        sum += part;
    }
    cout << "s = " << sum;
}