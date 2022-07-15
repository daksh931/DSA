#include <iostream>
using namespace std;

// check in sub array whether it is sorted or not
// base case if n==0 or n==1 array is sorted
// recursive case if a[0] < a[1] array is sorted

bool arraysorted(int arr[] , int n)
{
    if(n==0 or n==1)
    {
        return true;
    }
    if((arr[0] < arr[1]) and arraysorted(arr+1 ,n-1))
    {
        
        return true;
    }
   
    return false;
    
}

int main()
{
int arr [] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);

    cout<<arraysorted(arr,n);

}