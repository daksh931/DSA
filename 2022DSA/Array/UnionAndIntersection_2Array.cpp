#include<bits/stdc++.h>
using namespace std;

void getIntersection(int arr1[], int len1 , int arr2[] , int len2)
{
    
}

void getUnion(int arr1[], int len1 , int arr2[] , int len2)
{
    set<int> s1;

    for (int i = 0; i < len1; i++)
    {
        s1.insert(arr1[i]);
    }
    
    
    for (int i = 0; i < len2; i++)
    {
        s1.insert(arr2[i]);
    }
    cout<<"Union of Two sets : ";
    for(auto itr=s1.begin() ; itr!= s1.end() ; itr++)
    {
        
        cout<<*itr<< " ";

    }
    cout<<endl;
}

int main()
{   
    int arr1[] = {1,2,3,4,5,6,7,8};
    int len1 = sizeof (arr1) / sizeof(arr1[0]);
    int arr2[] = {6,7,8,9,10,11,12,13};
    int len2 = sizeof (arr2) / sizeof(arr2[0]);

    getUnion(arr1 , len1 , arr2 , len2);
    getIntersection(arr1 , len1 , arr2 , len2);
}