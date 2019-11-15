#include<iostream>
#include<cstring>
using namespace std;

int stringCompare(char str1[],char str2[]){
  int idx = 0;
  
  while(str1[idx] != '\0'){
    /*
      we stop if there are diffrent characters which includes
      the end of the second string since we know str1[idx]!='\0'
    */
    if(str1[idx] != str2[idx]){
      break;
    }

    idx++;
  }

  //This return statement will give us the desired ouput think why.
  return str1[idx] - str2[idx];
}

int main(){

  char asd[] = "asd";
  char asDa[] = "asDa";
  char dsa[] = "dsa";
  char same[] = "same";

  cout << stringCompare(asd, dsa) << endl;
  cout << stringCompare(same,same) <<endl;
  cout << stringCompare(asd,asDa) <<endl;

  return 0;
}