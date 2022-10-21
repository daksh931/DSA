#include <iostream>
using namespace std;

int binsrc(int arr[],int f,int lo,int hi)
{   if(lo>hi)
     {
        return false;
     }
     else  { int mid = (lo+hi)/2;

        if(f==arr[mid])
        {
            return mid;
        }
        if(f<arr[mid])
        {
            return binsrc(arr,f,lo,mid-1);
        }

        if(f>arr[mid])
        {
            return binsrc(arr,f,mid+1,hi);
        }
}
} 

int main()
{
    int arr[] = {2,5,6,9,12,24,54,79,81,92};
    int hi = sizeof(arr)/sizeof(arr[0]);
    int f = 79;
    int lo=0;
    cout<<binsrc(arr,f,lo,hi);

}