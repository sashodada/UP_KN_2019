#include<iostream> 

using namespace std;

int main() 
{
  int n; 
  cin >> n;
  
  // за всяка цифра {1,2,...,9} изпълняваме подобно на
  // предишната задача, като броим колко пъти тя се е
  // срещнала
  for (int digit = 1; digit <= 9; digit++)
  {
    int temp = n; // копираме стойността на n във времанна променлива
    int count = 0;
    // изпълняваме вложения цикъл върху временната променлива
    while(temp > 0)
    {
      int lastDigit = temp % 10;
      if(lastDigit == digit)
      {
        count++;
      }

      temp /= 10;
    }
    cout << digit << " -> " << count << endl;
  }
  
  // Забележка: по-ефективно би било решението
  // с пазенето на броя в 10 брояча (по един за
  // всяка цифра) и обхождането на числото само 
  // веднъж, но тук целим да покажем вложените
  // цикли. Това (по-бързо) решение може да се
  // пробвате да решите самостоятелно.

  return 0;
}