#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n;
  int array[1001];

  cin >> n;

  for(int i = 0; i < n; ++i){
    cin >> array[i];
  }

  int currCount;
  for(int i = 0; i < n; ++i){
    currCount = 0;

    for(int j = 0; j < n; ++j){
      if(array[j] == array[i]){
        ++currCount;
      }
    }

    if(currCount > (ceil(n/2))){
      cout << "The number is: " << array[i] << endl;
      return 0;
    }
  }

  return 0;
}