#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int s_col, int s_row, int matrix [5] [5], int n_col , int n_row)
{
    if(s_col<=n_col )
    {
    for (int coll = s_col; coll <n_col ; coll++)
    {
       cout<< matrix[s_row][coll]<< " ";
    }

    for (int roww = s_row+1; roww <n_row ; roww++)
    {
       cout<< matrix[roww][n_col-1]<< " ";
    }
    

    for (int coll = (n_col-1)-1 ; coll >s_col-1 ; coll--)
    {
       cout<< matrix[n_row-1][coll]<< " ";
    }

    for (int roww = (n_row-1)-1; roww >s_row ; roww--)
    {
       cout<< matrix[roww][s_col]<< " ";
    }
}
else{
    return;
}
    spiralPrint( s_col+1 ,s_row+1 ,matrix ,n_col-1 ,n_row-1);
}

int main()
{

    // int matrix[4][4] = {{1, 2, 3, 4},
    //                     {5, 6, 7, 8},
    //                     {9, 10, 11, 12},
    //                     {13, 14, 15, 16}};


    int matrix[5][5] = {{1, 2, 3, 4,5},
                        { 6, 7, 8,9,10},
                        { 11, 12,13,14,15},
                        {16,17,18,19,20},
                        {21,22,23,24,25}};




    int row = sizeof(matrix)/sizeof(matrix[0]);
    int col = sizeof(matrix[0])/sizeof(matrix[0][0]);

    spiralPrint(0,0,  matrix, col, row );
}