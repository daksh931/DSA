#include <iostream>

using namespace std;

merge(int arr[],int lo, int mid,int hi){
    int len1 = mid-lo;
    int len2 = hi-mid;

    int arr1[len1];
    int arr2[len2];

    for (int i = 0; i < len1; i++)
    {
        arr1[i]=arr[i];
    }

    for (int i = 0; i < len2; i++)
    {
        arr2[i]=arr[mid+1+i];
    }

    int i =0;
    int j= 0;
    int k =lo;
    while(i<len1 && j<len2)
    {
        if (arr1[i]<arr2[j])
        {arr[k] = arr1[i];
        i++;
        }
        else{
            arr[k]=arr2[j];
            j++;
        }

        k++;
    }

    while(i<len1)
    {
        arr[k] = arr1[i];
        i++;k++;
    }
    while(j<len2)
    {
        arr[k] = arr2[j];
        j++;k++;
    }
}

mergesort(int arr[], int lo ,int hi)
{
    
    if(lo<hi){
    int mid = (lo+hi)/2;
        
    mergesort(arr,lo,mid);
    mergesort(arr,mid+1,hi);
    merge(arr,lo,mid,hi);
    }

}

int main()
{
    int arr[] = {4,5,8,1,2,6,3,9,7};
    int len= sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,len);

    for(int i=0; i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}