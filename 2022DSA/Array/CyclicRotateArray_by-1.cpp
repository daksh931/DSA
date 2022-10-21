#include<bits/stdc++.h>
using namespace std;

void cyclicRotate(int arr[] , int len)
{
    
    int hi = len-1;
    int lo =hi-1;

    while(lo>-1)
    {
        swap(arr[hi--] , arr[lo--]);
    }

}

int main()
{   
    int arr [] = {1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    cyclicRotate(arr,len);

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}