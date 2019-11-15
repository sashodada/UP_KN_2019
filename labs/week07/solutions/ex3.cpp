#include<iostream>
#include<cstring>
using namespace std;

void concatStr(char str1[], char str2[], char concat[]){
  int concatIdx = 0, currentStrLength = strlen(str1);

  for(int i = 0; i < currentStrLength; i++){
    concat[concatIdx++] = str1[i];
  }

  currentStrLength = strlen(str2);
  for(int i = 0; i < currentStrLength + 1; i++){
    concat[concatIdx++] = str2[i];
  }
}

int main(){

  char abc[] = "abc", de[] = "de";
  char test[6];
  concatStr(abc,de,test);

  cout << test << endl;
  cout << strlen(test) << endl;
  
  return 0;
}