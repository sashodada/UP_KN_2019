#include<iostream>
using namespace std;

bool contains(int searchIn, int toFind){
  int copyOfToFind = toFind;
  while(searchIn != 0){
    if((searchIn % 10) == (copyOfToFind % 10)){
      copyOfToFind /= 10;
      if(copyOfToFind == 0){
        return true;
      }
    }
    else{
      copyOfToFind = toFind;
    }
    searchIn /= 10;
  }
  return false;
}

int main(){
  int searchIn, toFind;
  cin >> searchIn >> toFind;

  cout << (contains(searchIn, toFind) ? "Yes" : "No") << endl;
  return 0;
}