#include <iostream>
using namespace std;



bool search(int arr[] , int index, int len)
{

    if(index == len-1)
    {
        return true;
    }
    return arr[index] < arr [index + 1] && search(arr , index+1 ,len);
}


int main()
{
    int arr [] = {1,6,9,12};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<< search(arr , 0,len);
}