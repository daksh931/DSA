#include<bits/stdc++.h>
using namespace std;

void Rotatek(int arr[] , int len, int k)
{
    while(k>0)
    {
        int hi = len-1;
        int lo = hi-1;
        while(hi>0)
        {
            swap(arr[hi--], arr[lo--]);
        }
        k--;
    }
    
}

int main()
{   
    int arr [] = {1,2,3,4,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    Rotatek(arr,len , k);

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}