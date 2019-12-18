#include <iostream>
using namespace std;

// Hanoi towers, recursive

void hanoiSolution(int n, char from, char to)
{
    if (n == 1)
    {
        cout << "Moved disk 1 from " << from << " to " << to << endl;
        return;
    }

    char helper = 'A' + 'B' + 'C' - from - to;
    hanoiSolution(n - 1, from, helper);
    cout << "Moved disk " << n << " from " << from << " to " << to << endl;
    hanoiSolution(n - 1, helper, to);
}

int main()
{
    hanoiSolution(3, 'A', 'C');
    return 0;
}