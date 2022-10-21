#include <iostream>
using namespace std;

//Ques---> Given an array nums of n integers where nums[i] in the range [1 , n], 
//         return an array of all the integers in the range [1,n] that do not appear in nums.

void cycle(int arr[]  , int len)
{   int i = 0;
    while(i<len)
    {   
        if(arr[i] != i+1)
        {   
            
            // cout <<i;
            int temp = arr[i];
            arr[i] = arr[temp-1] ;
            arr[temp-1] = temp;
            
            
        }

        i++;
    }
    
}

void printarr(int arr[] , int len)
{
    for(int i=0; i<len ; i++)
    {
        cout<< arr[i] << " ";
    }
}

int missingelem(int arr[], int len)
{   cout<<"\nElements not present in arr - ";
    for(int i =0; i<len ; i++)
        {
            if(arr[i] != i+1)
            {
                cout<< i+1 <<" ";
            }
        }
    
}


int main()
{
    int arr[] ={4,2,7,8,3,1};
    int len = sizeof(arr)/sizeof(arr[0]);
   
    cycle(arr , len);
   
    printarr(arr , len);
    missingelem(arr, len);
    // cout <<"\nMissing elem in arr is - "<< missingelem(arr,len);
}