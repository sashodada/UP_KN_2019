#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "molq vavedete cqlo polojitelno chislo N: ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int chislo;
        cout << "molq vavedi chislo: ";
        cin >> chislo;

        bool isPrime = true;

        for (int j = 2; j < chislo; j++)
        {
            if (chislo % j == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime)
        {
            cout << "chisloto e prosto" << endl;
        }
        else
        {
            cout << "chisloto ne e prosto" << endl;
        }
    }

    return 0;
}