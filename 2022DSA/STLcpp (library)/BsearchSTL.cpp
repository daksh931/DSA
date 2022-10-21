#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int arr[] = {5,7,10,12,12,12,12,21,66,78};
    int n = sizeof(arr)/sizeof(int);

    int find_elem = 12;

    bool present = binary_search(arr,arr+n,find_elem);
    //binary_search function is provided by algorithm library

    if(present){
        cout<<"Elem is present";
    }
    else{
        cout<<"elem is not present";
    }


    //find index of elem
    //lower_bound(start,end,find_elem) and upper_bound(start,end,find_elem)
    // lower bound = first elem present if present repeatedly

    // ** IMP ** Array must be sorted

    auto it = lower_bound(arr,arr+n,find_elem);
    cout<<endl;
    cout<<it-arr;

    auto itt = upper_bound(arr,arr+n,find_elem);
    cout<<endl;
    cout<<itt-arr-1;

    cout<<endl;
    int frequecy = itt-it;
    cout<<"Frequency of 12 is - "<<frequecy<<endl;
}