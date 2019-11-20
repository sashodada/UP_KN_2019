#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Molq, vuvedete stoinost cqlo polojitelno chislo za N: ";
    cin >> N;

    int product = 1;
    for (int i = 1; i <= N; i++)
    {
        product = product * i;
    }

    cout << "N! = " << product << endl;
    return 0;
}