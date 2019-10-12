#include<iostream>
#include<cmath>
using namespace std;

int main(){

  double sideA,sideB,sideC;

  cout << "Enter the sides of the triangle: ";
  cin >> sideA >> sideB >> sideC;

  //Calculate semi-permieter needed for heron's formula
  //https://en.wikipedia.org/wiki/Heron%27s_formula
  double semiPerimeter = (sideA + sideB + sideC) / 2;

  //Calculate the area of the triangle
  double area = sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));

  //Output the area
  cout << "Area is: "<< area << endl;  

}