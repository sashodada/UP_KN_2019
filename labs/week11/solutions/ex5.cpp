#include<iostream>
using namespace std;

const int MAX_SIZE = 20;

bool isTriangularMatrix(int mat[MAX_SIZE][MAX_SIZE], int n) 
{ 
  bool upperTriagFlag = true, lowerTriagFlag = true;
  for(int i = 0 ; i < n; i++){
    for(int j = 0; j < n; j++){

      if(upperTriagFlag){
        if(j < i){
           if(mat[i][j] != 0){
            upperTriagFlag = false;
          }
        }

        if(j >= i){
          if(mat[i][j] == 0){
            upperTriagFlag = false;
          }
        }
      }

       if(lowerTriagFlag){
        if(j <= i){
           if(mat[i][j] == 0){
            lowerTriagFlag = false;
          }
        }

        if(j > i){
          if(mat[i][j] != 0){
            lowerTriagFlag = false;
          }
        }
      }
    }
  }

  return (upperTriagFlag || lowerTriagFlag && !(upperTriagFlag && lowerTriagFlag));
} 

void matrixInput(int mat[MAX_SIZE][MAX_SIZE], int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> mat[i][j];
    }
  }
}

int main(){

  int matrix[20][20];

  int n;
  cin >> n;

  if(n >= 20){
    cout << "Invalid dimensions" << endl;
    return 0;
  }

  matrixInput(matrix,n);
  cout << boolalpha << isTriangularMatrix(matrix,n);
  return 0;
}