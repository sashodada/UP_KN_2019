#include <iostream>
using namespace std;
int main()
{
  int sum = 45;

  int cifra;
  for (int i = 0; i < 8; ++i)
  {
    cin >> cifra;
    sum = sum - cifra;
  }

  cout << sum << endl;
  return 0;
}