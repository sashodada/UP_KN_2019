#include <iostream>
using namespace std;
int BCD(int first, int second)
{
  if (second == 0) {
    return first;
  }

  return BCD(second, first % second);
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << BCD(a, b) << endl;
  return 0;
}