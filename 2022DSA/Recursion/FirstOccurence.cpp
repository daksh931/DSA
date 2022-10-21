#include<iostream>
using namespace std;

int first(int arr[],int key,int i,int n)
{
    if(i==n) return -1;
    if(arr[i] == key)
    {
        return i;
    }

    return first(arr,key,i+1,n);
}

int main()
{
    int arr[] = {5,4,6,4,9,7,3,1};
    int key =7;
    int n = sizeof(arr)/sizeof(int);
    cout<<first(arr,key,0,n);
}