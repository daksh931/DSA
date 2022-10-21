#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int arr[] = {5,7,9,1,2,4,66,45};
    int n = sizeof(arr)/sizeof(int);
    //search in array with find similar to linear search

    int find_elem = 66;

    auto it = find(arr,arr+n,find_elem);
    //arr starting index and arr+n ending index
    //cout<<*it<<endl;

    // to get index just it - arr where 'it' stores address of find_elem 
    //and 'arr' stores initial address
    int index = it -arr;
    if(index == n)
    {
        cout<<"Element is not present ";
    }
    else{
        cout<<index;
    }

}