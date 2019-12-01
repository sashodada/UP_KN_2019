#include <iostream>
using namespace std;

const int MAX_LEN = 1000;

void swapInt(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapDouble(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    swapInt(&a, &b);

    cout << "After swap \n"; // '\n' означава "нов ред"
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}