#include <iostream>
using namespace std;


last(int arr[],int n , int key , int i)
{
    if(i==n) return -1;

    int restarray =  last(arr,n,key,i+1);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;

}

int main()
{

    int arr[] = {5,48,27,6,521,2,7,64,6,4};
    int n = sizeof(arr)/sizeof(int);
    int key =6;

    cout<<last(arr,n,key,0);
}