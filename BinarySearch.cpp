#include <iostream>
using namespace std;

// Pre-requisite Array must be sorted 

int binsearch(int arr[] ,int lo  , int hi ,int num )
    {
        int mid;
        if (hi>=lo){ 

            // cout<< "hi "<<hi;
            // cout<< "\nlo "<<lo;
            mid = (lo + hi) / 2;
            // cout<<"\n mid"<<mid ;
            // cout<<"\n num" <<num <<"\n";

            if (num == arr[mid])
            {
                return mid ;
                
            }

            else if (num > arr[mid])
            {   
                return  binsearch(arr ,mid+1 , hi , num );
            }

            else if (num < arr[mid])
            {   
                return  binsearch(arr , lo ,mid-1 ,num );
            }
            

            }
    }

int main (void)
{
    int arr[] = {5,7,9,11,14,15,17,89};

    int num = 12;
    // cout<< sizeof(arr)/sizeof(arr[0])<<"hello";
    

    int result = binsearch( arr , 0,(sizeof(arr)/sizeof(arr[0])) ,num );
    if (result == -1)
    {
        cout<< "Element doesn't exist";
    }
    else if (arr[result] != num)
    {
        cout << "Element does not exist in array ";
    }
    else {
        cout << "Index in Array is -> "<<result;
    }

    
    return 0;
}
