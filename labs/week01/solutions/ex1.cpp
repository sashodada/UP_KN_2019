#include<iostream>
using namespace std;

const double PI = 3.14159265;

int main(){

  int initialInput;

  cin >> initialInput;

  //Alternatively switch statement could be used 
  if(initialInput == 0){
    double squareSide;

    cin >> squareSide;

    /*  We could also first use a variable to perform our calulations :
        double area = squareSide * squareSide
        and then print it :
        cout << area << endl;
     */
    
    cout << "The area of a square with side "<< squareSide 
      << " is equal to "<< (squareSide * squareSide) << endl; 
  }
  else if(initialInput == 1){
    double sideA, sideB;

    cin >> sideA >> sideB;

    cout << "The area of a rectangle with sides " << sideA << " and " << sideB
    <<" is equal to " << (sideA * sideB) << endl;
  }
  else if(initialInput == 2){
    double radius;

    cin >> radius;

   cout << "The area of a circle with radius " << radius 
    << " is equal to " << PI * radius * radius << endl; 
  }
  else{
    cout<<"Invalid input."<<endl;
  }

  return 0;
}