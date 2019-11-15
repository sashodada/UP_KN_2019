#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char string[]){
  int n = strlen(string);
  char temp;

  for(int i = 0; i < n/2; i++){
    //Alternatively we could use swap(string[i],string[n-i-1]);
    temp = string[i];
    string[i] = string[n-i-1];
    string[n-i-1] = temp;
  }
}

int main(){

  char testStr[] = "string";
  reverseString(testStr);
  cout << testStr << endl; // Prints the reverse of string - gnirst

  // How would you check if a string is a palindrome
  char palindrome[] = "refer";
  reverseString(palindrome);
  cout << palindrome << endl; // Prints the reverse of refer - refer
  return 0;
}