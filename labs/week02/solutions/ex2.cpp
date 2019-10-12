#include<iostream>
using namespace std;

int main(){
  int n, m, k;
  cin >> n >> m >> k;

  /*
    We can get k chocolate pieces using only a single break iff k is divisible by n or by m
    This is because the k pieces actually form a rectangle and one of the sides of the rectange is either the length or width i.e. n or m
  */

  if( (k % n == 0 || m % n == 0) && (k <= n * m)){
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}