#include<bits/stdc++.h>
using namespace std;

void sortNeg(int arr[] , int len)
{
    
    int lo = 0;
    int mid = 0;
    
    while(mid<len)
    {
        cout<< lo << " "<<endl;
        cout<< mid << " " <<endl;
        if(arr[mid] <0)
        {
            swap(arr[lo++],arr[mid++]);
        }

        else if(arr[mid >=0])
        {
            mid++;
        }
    }

}

int main()
{
    int arr [] = {-1,9,-2,8,-6,-4,2,-7,6,10,-19};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    sortNeg(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i] << " ";
    }
    
}