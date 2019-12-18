#include<iostream>
using namespace std;

const int MAX_N = 100;

long long findSumOf3x3Platform(int matrix[MAX_N][MAX_N], int row, int col){
  int rowLimit = row + 3;
  int colLimit = col + 3;
  long long sum = 0;

  for(int i = row; i < rowLimit; ++i){
    for(int j = col; j < colLimit; ++j){
      sum += matrix[i][j];
    }
  }

  return sum;
}

void printPlatform(int matrix[MAX_N][MAX_N], int row, int col){
  int rowLimit = row + 3;
  int colLimit = col + 3;

  for(int i = row; i < rowLimit; ++i){
    for(int j = col; j < colLimit; ++j){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

void findAndPrintLargestPlatform(int matrix[MAX_N][MAX_N], int N, int M) {
  //initialize current maximum sum to be the sum of the first platfrom
  long long currMaxSum = findSumOf3x3Platform(matrix,0,0);
  int currPlatformRow = 0, currPlatformCol = 0;

  for(int i = 0; i <= N - 3; ++i) {
    for(int j = 0; j <= M - 3; ++j) {
      long long currSum = findSumOf3x3Platform(matrix,i,j);
      if(currSum > currMaxSum) {
        currMaxSum = currSum;
        currPlatformRow = i;
        currPlatformCol = j;
      }
    }
  }

  cout << currMaxSum << endl;
  printPlatform(matrix, currPlatformRow, currPlatformCol);
}

int main() {
  int matrix[MAX_N][MAX_N];
  int N, M;
  cin >> N >> M;

  
  if(N > 100 || M > 100 || N < 3 || M < 3){
    cout << "Invalid dimensions" << endl;
    return 0;
  }

  //matrix input - can also be a function
  for(int i = 0; i < N; ++i){
    for(int j = 0;j < M; ++j){
      cin >> matrix[i][j];
    }
  }

  findAndPrintLargestPlatform(matrix,N,M);

  return 0;
}