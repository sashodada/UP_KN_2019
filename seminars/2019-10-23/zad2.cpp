#include <iostream>
using namespace std;
int BCD(int a, int b)
{
  if (b == 0)
  {
    return a;
  }

  return BCD(b, a % b);
}

int main()
{
  int n = 5;
  int chisla[10];
  for (int i = 0; i < n; ++i)
  {
    cin >> chisla[i];
  }

  for (int i = 0; i < n; ++i)
  {
    for (int j = i + 1; j < n; ++j)
    {
      cout << "BCD (" << chisla[i] << ", " << chisla[j] << ") = " << BCD(chisla[i], chisla[j]) << endl;
    }
  }

  return 0;
}