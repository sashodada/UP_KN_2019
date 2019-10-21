#include<iostream>

using namespace std;

int main() 
{
  // Дефиниция на n
  int n;

  // Въвеждане на n от клавиатурата
  cin >> n;

  // Инициализация на сумата
  // Как бихме инициализирали, ако ставаше въпрос за произведение ?
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    int num; // дефиниция на текущото число
    cout << "Enter number " << i + 1 << ": ";
    cin >> num; // прочитане на числото

    // добавяне на текущото число към общата сума
    sum += num; // <=> sum = sum + num
  }
  
  cout << "The sum of the numbers is " << sum << endl;

  return 0;
}