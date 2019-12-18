#include<iostream>
using namespace std;

const int BOARD_SIZE = 8;

bool checkRowAndCol(int whiteX, int whiteY, int blackX, int blackY){
  return (whiteX == blackX) || (whiteY == blackY);
}

bool currDiagCheck(int currY, int leftCheck, int rightCheck, int blackX, int blackY){
  if(currY != blackY){
    return false;
  }

  if(leftCheck >= 0 && leftCheck == blackX){
    return true;
  }

  if(rightCheck < BOARD_SIZE && rightCheck == blackX){
    return true;
  }

  return false;
}

bool checkWhiteTakes(int whiteX, int whiteY, int blackX, int blackY){
  if(checkRowAndCol(whiteX, whiteY, blackX, blackY)){
    return true;
  }

  int leftCheck = whiteX - 1, rightCheck = whiteX + 1;

  //check upper diag
  if(blackY > whiteY){
    for(int upCheck = whiteY + 1; upCheck <= blackY; ++upCheck, --leftCheck, ++rightCheck){
      if(currDiagCheck(upCheck,leftCheck,rightCheck, blackX, blackY)){
        return true;
      }
    }
  }

  //check lower diag 
  else{
    for(int downCheck = whiteY - 1; downCheck >= 0; --downCheck, --leftCheck, ++rightCheck){
      if(currDiagCheck(downCheck,leftCheck,rightCheck, blackX, blackY)){
        return true;
      }
    }
  }

  return false;
}

bool recDiagCheckUp(int currY, int leftCheck, int rightCheck, int blackX, int blackY){
  if(currY > blackY){
    return false;
  }

 if(currY == blackY && ((leftCheck >= 0 && leftCheck == blackX) || (rightCheck < BOARD_SIZE && rightCheck == blackX))){
    return true;
  }

  return recDiagCheckUp(currY + 1, leftCheck - 1, rightCheck + 1, blackX, blackY);
}

bool recDiagCheckDown(int currY, int leftCheck, int rightCheck, int blackX, int blackY){
  if(currY < blackY){
    return false;
  }

  if(currY == blackY && ((leftCheck >= 0 && leftCheck == blackX) || (rightCheck < BOARD_SIZE && rightCheck == blackX))){
    return true;
  }

  return recDiagCheckUp(currY - 1, leftCheck - 1, rightCheck + 1, blackX, blackY);
}

bool recursiveCheckWhiteTakes(int whiteX, int whiteY, int blackX, int blackY){
  if(checkRowAndCol(whiteX, whiteY, blackX, blackY)){
    return true;
  }

  int leftCheck = whiteX - 1, rightCheck = whiteX + 1;

  //check upper diag
  if(blackY > whiteY){
    int upCheck = whiteY + 1;
    if(recDiagCheckUp(upCheck,leftCheck,rightCheck, blackX, blackY)){
      return true;
    }
  }

  //check lower diag 
  else{
    int downCheck = whiteY - 1;
    if(recDiagCheckDown(downCheck,leftCheck,rightCheck, blackX, blackY)){
      return true;
    }
  }

  return false;

}

int main() {
  //for convenince we won't use the default chess notation
  //instead we will use numbers to represent x and y coordinates

  int whiteX, whiteY, blackX, blackY;

  cin >> whiteX >> whiteY >> blackX >> blackY;

  /*
  if(checkWhiteTakes(whiteX, whiteY, blackX, blackY)) {
    cout << "White queen takes black queen" << endl;
  }
  else {
    cout << "White queen does not take black queen" << endl;
  }
  */

  if(recursiveCheckWhiteTakes(whiteX, whiteY, blackX, blackY)) {
    cout << "White queen takes black queen" << endl;
  }
  else {
    cout << "White queen does not take black queen" << endl;
  }

  return 0;
}