#include <iostream>
using namespace std;

int testCaseCount = 1;
int passedTestCases = 0;
int failedTestCases = 0;

// връща истина. ако заетата от 'а' памет е част от заетата от 'b' памет
// тоест можем да си мислим, че ако 'а' заема интервал [ax, ay] и 'b' 
// заема интервал [bx, by] то [bx, by] е подинтервал на [ax, ay]
bool isSubarray(int *a, int *b, int la, int lb) // la = дължина на 'а', lb  = дължина на 'b'
{
    return a >= b && (a + la) <= (b + lb);
}

bool subarrays(int *arrays[], int npointers, int arrlengths[])
{
    for(int i = 0; i < npointers - 1; i++)
    {
        for(int j = i + 1; j < npointers; j++)
        {
            if(isSubarray(arrays[i], arrays[j], arrlengths[i], arrlengths[j]) 
                || isSubarray(arrays[j], arrays[i], arrlengths[j], arrlengths[i]))
            {
                return true;
            }
        }
    }
    return false;
}

void testCase(int *arrays[], int npointers, int arrlengths[], bool expectedResult, const char * comment = "")
{
    std::cout << "<--- Test case " << testCaseCount << " ---> \n";
    std::cout << "Description: " << comment << endl;
    bool passed = subarrays(arrays, npointers, arrlengths) == expectedResult;
    if(passed)
    {
        std::cout << "Test case PASSED.\n";
        passedTestCases++;
    }
    else
    {
        std::cout << "Test case FAILED.\n";
        std::cout << "Expected " << expectedResult 
            << " Got: " << subarrays(arrays, npointers, arrlengths);
        failedTestCases++;
    }
    cout << endl;
    testCaseCount++;
}

int main() 
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *b = a + 2;
    int c[] = {1, 2, 3, 4};
    int *pointers1[] = {a, b, c};
    int arrlengths1[] = {10, 8, 4};
    testCase(pointers1, 3, arrlengths1, true);

    int *pointers2[] = {a, c};
    int arrlengths2[] = {10, 4};
    testCase(pointers2, 2, arrlengths2, false, "Different arrays");

    int *d = a + 10; // d се намира след а в паметта
    int *pointers3[] = {a, d};
    int arrlengths3[] = {10, 1};
    testCase(pointers3, 2, arrlengths3, false, "Array beginning at the end of previous array");

    int *e = a + 5;
    int *pointers4[] = {a, e};
    int arrlengths4[] = {10, 7};
    testCase(pointers4, 2, arrlengths4, false, "Intersecting arrays");
}