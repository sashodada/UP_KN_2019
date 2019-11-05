#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n, currInput;
  //this way all elements will be set to zero
  int countArray[101] ={ };

  cin >> n;

  for(int i = 0; i < n; ++i){
    cin >> currInput;
    if( (++countArray[currInput]) > (ceil(n/2))){
      cout << "The number is: " << currInput << endl;
      return 0;
    }
  }
  return 0;
}