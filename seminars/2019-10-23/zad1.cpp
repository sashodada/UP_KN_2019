#include <iostream>
using namespace std;
int main()
{
  int chisla[10];
  for (int i = 0; i < 10; ++i)
  {
    cin >> chisla[i];
  }

  // сортиране - метод на мехурчето
  for (int i = 0; i < 10; ++i)
  {
    for (int j = 0; j < 10 - 1; ++j)
    {
      if (chisla[j] > chisla[j + 1])
      {
        int helper = chisla[j];
        chisla[j] = chisla[j + 1];
        chisla[j + 1] = helper;
      }
    }
  }
  
  for (int i = 0; i < 10; ++i)
  {
    cout <<  chisla[i] << " ";
  }
  cout << endl;

  return 0;
}