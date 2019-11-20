#include <iostream>
using namespace std;
int main()
{
  char symbol = '*';

  int N;
  cin >> N;

  for (int nivo = 1; nivo <= N; ++nivo)
  {
    for (int red = 1; red <= 2 * nivo; ++red)
    {
      for (int i = 0; i < 2 * N - red; ++i)
      {
        cout << " ";
      }
      for (int i = 0; i < red; ++i)
      {
        cout << symbol << " ";
      }
      cout << endl;
    }
  }
  return 0;
}