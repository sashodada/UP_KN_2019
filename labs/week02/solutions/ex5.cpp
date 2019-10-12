#include<iostream>
using namespace std;

int main(){

  char symbol;
  cout << "Enter a symbol: ";
  cin >> symbol;

  //This actually compares ascii codes
  bool isLowerCase = ((symbol >= 'a') && (symbol <= 'z'));
  bool isUpperCase = ((symbol >= 'A') && (symbol <= 'Z'));

  if(isLowerCase){
    cout << "You have entered a lower case letter" << endl;
  }
  else if(isUpperCase){
    cout << "You have entered a upper case letter" << endl;
  }
  else {
    cout << "The symbol you have entered is not a letter" << endl;
  }

  return 0;
}