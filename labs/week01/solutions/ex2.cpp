#include<iostream>
using namespace std;

int main(){

  double a,b,c;

  cin >> a >> b >> c;

  bool validSides = ((a + b > c) && (a + c > b) && (b + c > a));

	cout << validSides << endl;

  return 0;
}