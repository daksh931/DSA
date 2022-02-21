#include <iostream>
using namespace std;

void bubblesort(int arr[] , int len)
{

    for ( int i=0 ; i<len; i++)
    {
        for( int j=1 ; j<=len-1; j++ )
        {
            if (arr[j] < arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        } 
    }
    
}

void printarr( int arr[] , int len )
{   cout<<"Sorted array is -> ";
    for( int i=0; i<len; i++)
    {
        cout << arr[i] <<" ";
    }
}

int main()
{
    int arr[] = {5,-1};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    bubblesort(arr , len);
    
    printarr(arr ,len );
}
