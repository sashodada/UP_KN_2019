#include<iostream> 

using namespace std;

int main() 
{
  int n; 
  cin >> n;

  // Сменяме знака на числото, в случай, че е отрицателно
  if(n < 0)
  {
    n = -n;
  }
  
  // инициализираме променливата, в която ще
  // пазим броя на цифрите на числото
  unsigned digitCount = 0;

  // на всяка стъпка от цикъла намаляваме числото
  // с по 1 цифра чрез целочислено деление с 10
  // Пример:
  // n = 9823
  // Итерация 1: n = n / 10 = 9823 / 10 = 982; digitCount = digitCount + 1 = 0 + 1 = 1
  // Итерация 2: n = n / 10 = 982 / 10 = 98;   digitCount = 2
  // Итерация 3: n = n / 10 = 98 / 10 = 9;     digitCount = 3
  // Итерация 4: n = n / 10 = 9 / 10 = 0;      digitCount = 4
  // n == 0 -> цикълът спира

  while(n > 0) 
  {
    n /= 10;
    digitCount++;
  }

  cout << "The number of digits is " << digitCount << endl;

  return 0;
}