#include<bits/stdc++.h>
using namespace std;

int main()
{
    // for (int i = 0; i < 8; i++)
    // {   int ans = i&1;
    //     cout<<"value of - ("<< i <<" & "<<"1 --> " <<ans <<")" <<endl;
    // }
    

     int matrix[5][5] = {{1, 2, 3, 4,5},
                        { 6, 7, 8,9,10},
                        { 11, 12,13,14,15},
                        {16,17,18,19,20},
                        {21,22,23,24,25}};




    int row = sizeof(matrix)/sizeof(matrix[0]);
    int col = sizeof(matrix[0])/sizeof(matrix[0][0]);;
    cout<<row<< " " <<col<<endl;
}