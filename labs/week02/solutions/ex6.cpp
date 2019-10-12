#include<iostream>
using namespace std;

int main(){

  int k, m, n;
  cin >> k >> m >> n;

  //We can cook everything at once - the time we need will be 2 * the time we need to cook a single side.
  if (n <= k){
    cout << (2 * m) << endl;
  }
  //Otherwise because we have to cook everything from both sides we have n * 2 items to cook.
  else {
    //Check if we can always cook k from n * 2 items - this way we have optimal usage
    if ((n * 2) % k == 0){
      cout << (m * ((n * 2)/k)) << endl;
    }
    // If we have a remainder then after (n*2) / k cooks we will have something left to cook 
    // which means we have items to cook for another k minutes.
    else {
      cout << (m * (1 + ((n * 2) / k))) << endl;
    }
  }

  return 0;
}