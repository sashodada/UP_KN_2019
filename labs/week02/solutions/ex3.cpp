#include<iostream>
using namespace std;

int main(){

  int number;
  cout << "Enter a 3 digit number: ";
  cin >> number;

  //Find the digits of the number

  //The last digit is the remainder when dividing by 10
  int onesDigit = number % 10;

  /*  After dividing the original number by 10 we get a number, let's say x, composed by the first two digits of the original number
      The second digit will then be the remainder of the division of the number x by 10

      Alternatively we could get the last two digits by getting the remainder of number after division by 100 and then dividing the result by 10
      int tensDigit = (number % 100) / 10;
  */
  int tensDigit = (number / 10) % 10;

  //We can get the first digit when dividing the number by 100;
  int hundredsDigit = (number / 100);

  //Calculate the output the sum of the digits
  int sum = onesDigit + tensDigit + hundredsDigit;
  cout << "The sum of the digits is: " << sum << endl;

  //Check if the digits are in ascending/descending order
  bool isDesc = ((hundredsDigit > tensDigit) && (tensDigit > onesDigit));
  bool isAsc = ((hundredsDigit < tensDigit) && (tensDigit < onesDigit));

  if(isDesc){
    cout << "The digits of the number are in descending order." << endl;
  }

  if(isAsc){
    cout << "The digits of the number are in ascending order." << endl;
  }

  return 0;
}