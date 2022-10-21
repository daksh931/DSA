#include<bits/stdc++.h>
using namespace std;

//ques - https://drive.google.com/drive/folders/1-PNukHSuFB4NsmGI1U4772DBXr3eOoxR
int main()
{
    //int arr [] = {6,2,3,6,15,17,19,18};
    int arr [] = {6,2};
    int len = sizeof(arr)/sizeof(arr[0]);


    int count = 2;
    
    int pd = arr[1] - arr[0];
    int ans = 2;

    
   
   // now we will compare 2nd index and 1st index so starting from j =2
   int j=2;
   while(j< len)
   {    
        if((arr[j] - arr[j-1]) == pd)
        {
            count++;
        }           
        else{
            pd = arr[j] - arr[j-1];
            count = 2;
        }         
        ans = max(ans,count);
        j++;  
   }    
    
    cout << ans;
   
}