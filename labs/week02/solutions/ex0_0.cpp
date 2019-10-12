#include<iostream>
using namespace std;

int main(){
  
  double side,height;
  
  cout << "Please enter side and height: ";
  cin >> side >> height;

  //Calculate and output the area
  cout << "Area is: "<< (side * height) / 2 << endl; 

  return 0;
}