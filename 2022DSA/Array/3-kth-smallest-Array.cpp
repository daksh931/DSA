#include<iostream>
using namespace std;

// Dutch Flag Problem


void Arrsort(int arr [],int len)
{
    int hi = len-1;
    int start =0;
    int mid = 0;
    
    while(mid<=hi)
    {
        
        if(arr[mid] ==0)
        {
            swap(arr[start++] , arr[mid++]);
            
        }

        else if(arr[mid] ==1)
        {
            mid++;
            
        }

        else if(arr[mid] ==2 )
        {
            swap(arr[mid],arr[hi--]);
            
        }
    } 
}

int main()
{
    int arr[]= {0,1,2,0,2,0,1,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    Arrsort(arr,len);

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<< " ";
    }
    

}