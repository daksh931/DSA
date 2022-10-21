#include<iostream>
using namespace std;

void MinMax(int arr[] , int len)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < len; i++)
    {
        /* code */
        if (min> arr[i])
        {
            min = arr[i];        
        }

        if(max<arr[i])
        {
            max= arr[i];
        }

        
    }
    cout<<"Min Val : "<<min;
    cout<<"Max Val : "<<max;
}

int main()
{
    int arr[] = {7,8,5,6,44,5,22}; // min 5 , max = 44
    int len = sizeof(arr)/sizeof (arr[0]);

    MinMax(arr,len);
}