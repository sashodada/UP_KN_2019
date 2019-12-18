#include <iostream>
using namespace std;

// Find word in matrix diagonally using pointers;

int main()
{
    char word[4] = "dog";
    char matrix[9][10] = {
        "abnwijdal",
        "abnwijdsl",
        "abnwdjasl",
        "abnwioasl",
        "abnwjdgsl",
        "abnijdasl",
        "abwijdasl",
        "anwijdasl",
        "bnwijdasl"
    };

    int wordLength = 3;
    int matrixSize = 9;

    for (int i = 0; i < matrixSize - wordLength + 1; ++i)
    {
        for (int j = 0; j < matrixSize - wordLength + 1; ++j)
        {
            bool metWord = true;
            for (int k = 0; k < wordLength; ++k)
            {
                if (*(*(matrix + i + k) + j + k) != *(word + k))
                {
                    // matrix[i + k][j + k]
                    metWord = false;
                }
            }

            if (metWord)
            {
                cout << "Yes" << endl;
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}