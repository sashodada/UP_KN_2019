#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int matrix[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // главен диагонал
    for (int i = 0; i < n; i++)
    {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    // обратен диагонал
    for (int i = 0; i < n; i++)
    {
        cout << matrix[i][n - i - 1] << " ";
    }
    cout << endl;
    return 0;
}
