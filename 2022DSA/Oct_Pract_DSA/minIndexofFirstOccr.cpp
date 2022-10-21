//  Ques - https://drive.google.com/drive/folders/1AeAex8bq4KTGBi5iaiX5cu4LWh7gDtZl
// splution - https://www.youtube.com/watch?v=kJW_iXrwePE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=24 

// This solution not working in personal pc (online cpp compiler works fine) 
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr [] = {1,5,3,4,3,5,6};
    // first ocurencce number is 5 and first index of occurence no(5) is index(1)
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
    const int N = 1e6+2;
    int idx[N];
    int minidx = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    cout<<"Min idx ";   

    for (int i = 0; i < len; i++)
    {
        if(idx[arr[i]] != -1)
        {
            minidx = min(minidx , idx[arr[i]]);
        }

        else{
            idx[arr[i]] = i;
        }
    }
    
    if(minidx == INT_MAX)
    {
        cout<<"-1";
    }
    else{
        cout<<minidx+1;
    }

    
}