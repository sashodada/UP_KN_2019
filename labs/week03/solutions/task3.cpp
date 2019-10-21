#include<iostream> 
#include<cmath>

using namespace std;

int main() 
{
  int n; 
  cin >> n;
  
  /* Число е просто, ако се дели единствено на
  * 1 и на себе си, съответно проверяваме дали
  * има други делители. Ако числото се разлага
  * на прости делители, то има делител по-малък
  * от квадратния корен на числото. Доказателство:
  * https://proofwiki.org/wiki/Composite_Number_has_Prime_Factor_not_Greater_Than_its_Square_Root
  * */
  int factor = 2;

  while(factor <= sqrt(n) && (n % factor) != 0)
  {
    factor++;
  }

  /* Ако factor дели n, то n не е просто, тъй
  * като factor < n (<= sqrt(n)) и не е 1 */ 
  if(n % factor == 0) 
  {
    cout << "not prime" << endl;
  }
  else 
  {
    cout << "prime" << endl;
  }

  return 0;
}