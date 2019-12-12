#include <iostream>
using namespace std;

int gcdEuclid(int a, int b) 
{
    if(a == b) 
    {
        return a;
    }

    if(a > b)
    {
        return gcdEuclid(a - b, b);
    }

    return gcdEuclid(a, b - a);
}

int main() 
{
    int a, b;
    cin >> a >> b;
    cout << "Greatest common divisor of " << a << " and " << b << " is " << gcdEuclid(a,b);
}