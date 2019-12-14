#include<iostream>
#include<cstring>

using namespace std;

bool isMatching(const char * strToSearch, const char * strToMatch) {
  for (int i = 0; *(strToMatch + i); i++) {
    if (strToSearch[i] != strToMatch[i]) {
      return false;
    }
  }
  return true;
}

void shiftLeft(char * strToShift, int shiftPosCount) {
  int i = 0;
  for (; *(strToShift + i); i++) {
    strToShift[i - shiftPosCount] = strToShift[i];
  }
  //copy the \0
   strToShift[i - shiftPosCount] = strToShift[i];
}

void shiftRight(char * strToShift, int shiftPosCount) {
  int textLen = strlen(strToShift);
  for (int i = textLen + 1; i >= 0; i--) {
    *(strToShift + i + shiftPosCount) = *(strToShift + i);
  }
}

void performStringReplacement(char * destStr, const char * replaceWith) {
  for (int i = 0; *(replaceWith + i); i++) {
    *(destStr + i) = *(replaceWith + i);
  }
}

void replace(char * originalStr, const char * searchFor, const char * replaceWith, int maxSize) {
  int searchForLen = strlen(searchFor);
  int replaceWithLen = strlen(replaceWith);

  for (int i = 0; *(originalStr + i); i++) {
    if (isMatching(originalStr + i, searchFor)) {
     
      if (searchForLen > replaceWithLen) {
        performStringReplacement(originalStr + i, replaceWith);
        shiftLeft(originalStr + i + searchForLen, searchForLen - replaceWithLen);

      } else if (searchForLen < replaceWithLen) {
        if (strlen(originalStr) + replaceWithLen - searchForLen <= maxSize) {
          shiftRight(originalStr + i + searchForLen, replaceWithLen - searchForLen);
          performStringReplacement(originalStr + i, replaceWith);
        }
      } else {
        performStringReplacement(originalStr + i, replaceWith);
      }
    }
  }
}

int main(){
  char test1[] = "abcd xyzbc bcefg";
  replace(test1,"bc","GG",strlen(test1));

  cout << test1 << endl;

  char test2[100] = "abcd xyzbc bcefg";
  replace(test2,"bc","GGEZ",100);

  cout << test2 << endl;

  char test3[] = "abcd xyzbc bcefg";
  replace(test3,"bc","G",strlen(test3));

  cout << test3 << endl;
  return 0;
}