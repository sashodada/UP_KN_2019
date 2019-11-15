#include<iostream>
using namespace std;

int strLength(char string[]){
  int count = 0;
  while(string[count] != '\0'){
    count ++;
  };

  return count;
}

int main(){

  char test[] = "test";
  cout << strLength(test) << endl; // Prints 4

  char emptyTest[] = "";
  cout << strLength(emptyTest) << endl; //Prints 0

  return 0;
}