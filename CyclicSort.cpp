#include <iostream>
using namespace std;

// array or given numbers to sort must be in range (1 to N)


void cyclicsort(int arr[] , int len)
{
    for(int i=0; i<len; i++)
    {
        if(arr[i] == i+1)
        {
            break;
        }
        else {
            int num = arr[i];
            int temp = arr[i];
            arr[i] = arr[num-1];
            arr[num-1] = temp;

        }
    }
}

void printarr(int arr[] , int len)
{   
    cout<<"Array is -> ";
    for (int i=0; i<len; i++)
    {
        cout << arr[i] <<" ";
    }
}

int main ()
{               
    int arr [] = {5,2,4,3,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    cyclicsort(arr , len);

    printarr(arr , len);
}