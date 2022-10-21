#include <bits/stdc++.h>
using namespace std;

void bubble(int arr [], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                
            }

        }
        
    }
    
}

void printbubble(int arr[] , int len)
{
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i];
    }
    
}


int main()
{
    int arr []= {4,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    bubble(arr,len);

    printbubble(arr,len);

}