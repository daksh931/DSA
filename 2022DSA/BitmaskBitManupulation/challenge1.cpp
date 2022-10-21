#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,6,7,3,4,5,6,3,7,1}; // 4 , 1 only one time present
    int n=sizeof(arr)/sizeof(int);
    // using XOR '^' operator repeated number cancel out each other
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    
    }
    int temp =0;
    int index=0; 
    while(temp=(ans&1))
    {
        if(temp == 1)
        {
            break;
        }
        index++;
        temp = temp>>1;
    }

    // cout<<"index"<<index<<endl;
    int mask=1;
    mask = mask<<0 ;
    // cout<<mask <<endl;
    
    for (int i = 0; i < n; i++)
    {
        mask = mask^arr[i];
    }
    
    cout<<mask<<","<<(mask^ans);;
    
}