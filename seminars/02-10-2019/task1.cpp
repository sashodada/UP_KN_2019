#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;

    cout << "Please, input the parameters to a quadratic equation:" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Every X is a solution" << endl;
            }
            else
            {
                cout << "No solution" << endl;
            }
        }
        else
        {
            cout << "One solution X = " << -c / b << endl;
        }
    }
    else
    {
        double D = b * b - 4 * a * c;
        if (D < 0)
        {
            cout << "No solution" << endl;
        }
        else if (D == 0)
        {
            cout << "One solution X = " << -b / (2 * a) << endl;
        }
        else
        {
            double x1, x2;
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Two solutions" << endl;
            cout << "X1 = " << x1;
            cout << "X2 = " << x2;
        }
    }
    return 0;
}
