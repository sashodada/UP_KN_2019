#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n, currVar;
  double s, squaresSum = 0, sum = 0;
  cin >> n;

  for(int i = 0; i < n; ++i){
    cin >> currVar;
    squaresSum += (currVar * currVar);
    sum += currVar;
  }

  s = sum / n;
  double devitation = sqrt((squaresSum - (2 * s * sum) + (s * s * n)) / (n - 1));

  cout << "The deviation is: " << devitation << endl;

  return 0;
}