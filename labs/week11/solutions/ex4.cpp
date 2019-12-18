#include<iostream>
using namespace std;


long long performCalculation(int x, int n, int currTerm, long long accumulator){
  if(currTerm > n){
    return accumulator;
  }

  return performCalculation(x, n, currTerm + 1, accumulator * x + currTerm);
}


int main(){
  int x, n;
  cin >> x >> n;

  cout << performCalculation(x, n, 3, (x+2)) << endl;

  return 0;
}