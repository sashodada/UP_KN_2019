#include<iostream>
using namespace std;

int main(){
  long long N;
  cin >> N;

  long long prev, curr, next, count = 0;
  cin >> prev >> curr;

  for(long long i = 0; i < (N - 2); ++i){
    cin >> next;

    if(prev > curr && next > curr){
      ++count;
    }

    prev = curr;
    curr = next;
  }

  cout << "Count of local mins: " << count << endl;

  return 0;
}