#include<bits/stdc++.h>
using namespace std;

// time complexity O(n)

int main()
{
    int arr []= {1,2,0,7,2,1,2,3,0,8};
    int len = sizeof(arr)/sizeof(arr[0]);

    int mx = INT_MIN;

    for (int i = 0; i < len; i++)
    {
        
        
        if(mx< arr[i] && arr[i]>arr[i+1])
        {
            cout<<"Break rec day --"<<arr[i]<<endl;
            mx = max(arr[i] , mx);
        }
        else if(mx<arr[i] && i == len-1)
        {
            cout<<"Break rec day "<<arr[i]<<endl; 
        }
        
        
    }
    

}