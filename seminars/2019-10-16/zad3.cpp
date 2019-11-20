#include <iostream>
using namespace std;
int main()
{
  int a, b;
  char operation;
  cin >> a >> operation >> b;

  cout << a << " " << operation << " " << b << " = ";
  switch(operation) {
    case '+':
      cout << a + b;
      break;
    case '-':
      cout << a - b;
      break;
    case '*':
      cout << a * b;
      break;
    case '/':
      cout << a / b;
      break;
  }
  cout << endl;
  return 0;
}