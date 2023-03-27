#include <bits/stdc++.h>
using namespace std;

// Use of & operator to check for even/odd
// value of - (0 & 1 --> 0)
// value of - (1 & 1 --> 1)
// value of - (2 & 1 --> 0)
// value of - (3 & 1 --> 1)
// value of - (4 & 1 --> 0)
// value of - (5 & 1 --> 1)
// value of - (6 & 1 --> 0)
// value of - (7 & 1 --> 1)

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    for (int col = 0; col < 4; col++)
    {
        if (col & 1 )
        {
            for (int row = 3; row > -1; row--)
            {   
                cout << matrix[row][col] << " ";
            }
        }

        else
            for (int row = 0; row < 4; row++)
            {
                cout << matrix[row][col] << " ";
            }

        cout<<" -> ";
    }
}