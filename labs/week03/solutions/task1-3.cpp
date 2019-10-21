#include<iostream>

using namespace std;

int main() 
{
  // Дефиниция на n
  int n;

  // Въвеждане на n от клавиатурата
  cin >> n;

  // нека в countOdd пазим броя на нечетните числа до момента
  unsigned int countOdd = 0;

  for (int i = 0; i < n; i++)
  {
    int num; // дефиниция на текущото число
    cout << "Enter number " << i + 1 << ": ";
    cin >> num; // прочитане на числото

    // проверяваме дали текущото число е 
    // нечетно и ако е увеличаваме брояча s 1
    if((num % 2) > 0)
    {
      countOdd++; // <=> countOdd = countOdd + 1
    }
  }
  
  cout << "There are " << countOdd << " odd numbers." << endl;

  return 0;
}