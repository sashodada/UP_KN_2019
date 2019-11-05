#include<iostream>
using namespace std;

bool satisfiesCondition(int number){
  int onesDigit = number % 10;
  int tensDigit = (number % 100) / 10;
  int hundredsDigit = number / 100;

  int allNumbers[] = {(10 * hundredsDigit + onesDigit), (10 * hundredsDigit + tensDigit), (10 * tensDigit + onesDigit)};
  for(int i = 0; i < 3 ; ++i){
    if(allNumbers[i] + allNumbers[(i+1)%3] == allNumbers[(i+2)%3]){
      return true;
    }
  }

  return false;
}

int main(){

  for(int i = 100; i < 1000; ++i){
    if(satisfiesCondition(i)){
      cout << i << " ";
    }
  }
  
  cout << endl;
  return 0;
}