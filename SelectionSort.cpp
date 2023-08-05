#include <iostream>
using namespace std;

void bubblesort(int arr[] , int len)
{
        int min_idx;
    for ( int i=0 ; i<len-1; i++)
    {   min_idx=i;
        for (int j = i+1; j <len ; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;    
            }
            // cout<<"value of i "<<i<< " -- Val  of j "<<j<<endl;
        }
        if(min_idx != i) 
        {

            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
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
    int arr[] = {5,-1,8,-12,87,7,61};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    bubblesort(arr , len);
    
    printarr(arr ,len );
}
