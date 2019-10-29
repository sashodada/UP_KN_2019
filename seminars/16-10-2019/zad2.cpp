#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int startA, lengthA;
  int startB, lengthB;

  cin >> startA >> lengthA;
  cin >> startB >> lengthB;

  if (startA > startB)
  {
    int helper = startA;
    startA = startB;
    startB = helper;

    helper = lengthA;
    lengthA = lengthB;
    lengthB = helper;
  }

  if (startA + lengthA < startB)
  {
    cout << "Not intersecting" << endl;
  }
  else
  {
    cout << "Intersecting in interval (" << startB << ", " << min(startB + lengthB, startA) << ")" << endl;
  }

  return 0;
}