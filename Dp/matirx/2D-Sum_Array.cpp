#include<bits/stdc++.h>
using namespace std;

int main ()
{   int n ;
    cout<<"Enter the size of matrix or 2-D array ";
    cin>>n;

    int matrixx [n][n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            // int temp;
            cin>>matrixx[i][j];
        }
        
    }
    

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum+=matrixx[i][j];
            cout<<matrixx[i][j]<<" ";
        }
        
        cout<<endl;
    }
    cout<<sum;

}