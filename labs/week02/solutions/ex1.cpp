#include<iostream>
#include<cmath>
using namespace std;

int main (){

  double x1,y1,x2,y2;
  
  cout << "First point coordinates: ";
  cin >> x1 >> y1;

  cout << "Second point coordinates: ";
  cin >> x2 >> y2;

  //Calculate distance by x and y axis
  double xDist = x1 - x2;
  double yDist = y1 - y2;

  //the distance is the hypotenuse of a right triangle formed by the x and y axis distance
  double dist = sqrt(xDist * xDist + yDist * yDist);

  cout << "The distance is: " << dist << endl;

  return 0;
}