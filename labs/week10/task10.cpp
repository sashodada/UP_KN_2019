#include <iostream>
using namespace std;

void hanoi(int n, char from, char aux, char to)
{
    if(n == 1)
    {
        // един диск -> можем да го изместим директно
        cout << "Move 1 from " << from << " to " << to << endl;
        return;
    }

    // местим n-1 диск-а на спомагателния кол
    hanoi(n-1, from, to, aux);
    // местим n-тия, тоест най-големия
    cout << "Move " << n << " from " << from << " to " << to << endl;
    // връщаме n-1 по-малки диска върху най-големия (те в момента се намират на aux)
    hanoi(n-1, aux, from, to);
}

int main() 
{
    int n;
    cout << "Enter disc count: "; 
    cin >> n;
    cout << "Moving " << n << " discs from A to B \n";
    hanoi(n, 'A', 'C', 'B');
}