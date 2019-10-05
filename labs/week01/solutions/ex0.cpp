#include<iostream>
using namespace std;

int main(){

  int year;

  cin >> year;

  //If a year is divisible by 4 then it is possible that it is a leap year.
	bool couldBeLeap = (year % 4 == 0);

	//If year is divisible by 4 and 100 but not by 400 then it is a exception.
	bool isException = ((year % 4 == 0) && (year % 100 == 0) && (year % 400 != 0));

	//A year is leap iff it's divisible by 4 and it isn't an exception.
	bool isLeap = couldBeLeap && !isException;

  if(isLeap){
    cout << year << " is a leap year." << endl;
  }
  else {
    cout << year << " is not a leap year." << endl;
  }

  /*Alternatively we could merge all the conditions:
    bool isLeap = (year % 4 == 0) && !((year % 4 == 0) && (year % 100 == 0) && (year % 400 != 0));

    We could do the following transformations: 
    let (year%4 == 0) = p, (year % 100 == 0) = q, (year % 400 != 0) = r 
    then isLeap could be rewritten as:
    isLeap = p && !(p && q && r) = [using demorgan and associativity] p && (!p || !(q && r)) =[demorgan again] p && (!p || !q || !r) =
     =[distributivity] (p && !p) || (p && !q) || (p && !r) = p && (!q || !r)
    which finally gives us
    isLeap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)
    NB if year is not divisible by 4 our calculation will short-circut at the first test
  */
}