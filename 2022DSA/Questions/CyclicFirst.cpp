#include <iostream>
using namespace std;


void findmissing(int arr [] ,int len)
{   
    
    for(int i=0; i<=len; i++)
    {   //cout << i ;
        if(arr[i] == i )
        {
           
        }
        // else if ( arr[i] == len)
        // {   
        //     break;
        // }

        else {
            
            int temp = arr[i];
            arr[i] = arr[temp];
            arr[temp] = temp;

        }
    }
}

void printarr(int arr [] , int len){
    
    for(int i=0; i <len; i++)
    {
        cout<< arr[i] << " ";
    }
}

int main ()
{

    int arr[] = {6,0,2,1,5,4};
    int len = sizeof(arr)/sizeof(arr[0]);

    findmissing(arr , len);
 
    printarr(arr , len);
}