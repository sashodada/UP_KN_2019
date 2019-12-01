#include <iostream>
using namespace std;

const int MAX_LEN = 1000;

// връща истина, ако масивът arr съдържа в себе си елемент elem
bool contains(int* arr, int n, int elem)
{
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] == elem) 
        {
            return true;
        }
    }
    return false;
}

bool commonel(int *arrays[], int npointers, int arrlenghts[])
{
    // търсим елемент, който е елемент на всички масиви в arrays
    // ако е елемент на всички, то той е елемент и на първия масив
    // в такъв случай е достатъчно да проверим дали има елемент от 
    // първия масив, който се съдържа във всички останали, ако има
    // такъв, то той е търсеното х
    for(int i = 0; i < arrlenghts[0]; i++) // първият масив има arrlenghts[0] на брий елемента
    {
        int x = arrays[0][i];
        int j = 1; // започваме от втория масив
        // продължаваме докато открием масив, който не съдържа х или до края (в случай че всички го съдържат)
        while(j < npointers && contains(arrays[j], arrlenghts[j], x))
        {
            j++;
        }

        // ако сме стигнали до края, значи не сме открили такъв, който не го
        // съдържа (тоест всички масиви съдържат х и той е общ елемент)
        if(j == npointers)
        {
            return true;
        }
        // в противен случай продължаваме с проверка на другите елементи
    }
    return false;
}

int main() 
{
   int arr1[] = {1, 2, 3, 4}; // 4 елемента
   int arr2[] = {78, 99, 30, 11, 28, 42, 23, 1}; // 8 елемента
   int* pointers[] = {arr1, arr2};
   int arrlengths[] = {4, 8};
   std::cout << "Commonel: " << (commonel(pointers, 2, arrlengths) ? "true" : "false") << endl; // true заради 1

   int arr3[] = {100, 34, 89, 32, 66}; // 5 елемента
   int* pointers2[] = {arr1, arr3};
   int arrlengths2[] = {4, 5};
   std::cout << "Commonel: " << (commonel(pointers2, 2, arrlengths2) ? "true" : "false") << endl; // false понеже няма еднакви елементи в arr и arr3

}