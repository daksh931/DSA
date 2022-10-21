#include<iostream>
using namespace std;

void reverseArray(int start , int end , int arr[])
{
    while(start<end)
    {
        // swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}


int main()
{
    int arr[] = {5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    
    

    reverseArray(0,size-1 , arr);

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    
}