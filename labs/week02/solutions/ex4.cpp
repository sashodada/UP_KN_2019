#include<iostream>
using namespace std;

int main(){

  int number;
  cout << "Enter a 4-digit number: ";
  cin >> number;

  int onesDigit,tensDigit,hundredsDigit,thousandsDigit;
  
  onesDigit = number % 10;
  
  number /= 10; // Short version of number = number / 10;
  tensDigit = number % 10;

  number /= 10;
  hundredsDigit = number % 10;

  thousandsDigit = number / 10;

  bool isPalindrome = ((onesDigit == thousandsDigit) && (tensDigit == hundredsDigit));

  if(isPalindrome){
    cout << "The number you have entered is a palindrome" << endl;
  }
  else{
    cout << "The number you have entered is not a palindrome" << endl;
  }

  return 0;
}