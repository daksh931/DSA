#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,5,6,5,6,7,6,8,9,8,8,9,9}; // 7 only one time present rest 3 times
    int n=sizeof(arr)/sizeof(int);

    // largest integer is 64 bit so you can check (3N) or (3N+1) set bit 
    //for all numbers in binary and store in lenth of 64 in array

    //if sumarr is just initialize --> int arr[64]; leads to error and while adding values
    //to indexes in sumarr leads addition of unknown numbers which leads to wrong output
    // while initialize arr make = {0};
    int sumarr[64]={0};
    
    
    int count =0;
    
    for (int  i = 0; i < n; i++)
    {
        int j=0;
        while(arr[i]>0)
        {   int lastbit = (arr[i]&1);
        // cout<<"Last Bit : "<<lastbit<<endl;
            sumarr[j] += lastbit;
              
            arr[i] = arr[i]>>1;
            j++;
        }
        
    }
    int p=1;
    int Fans =0;
    for (int i = 0; i <64; i++)
    {
        sumarr[i]%=3;
        Fans += (sumarr[i]*p);
        p = p<<1;
         
    }
    cout<<endl;
    cout<<Fans<<" ";
    }