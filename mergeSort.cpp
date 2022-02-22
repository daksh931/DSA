#include <iostream>

using namespace std;


void printarr(int arr[] , int len)
{   
    cout<<"Array is -> ";
    for (int i=0; i<len; i++)
    {
        cout << arr[i] <<" ";
    }
}


void merge(int arr[] , int l , int mid, int r)
{
    int arr1len1=mid-l+1;
    int arr2len2=r-mid;

    //making two temporary arrays for storing sorted values in array
    int arr1[arr1len1];
    int arr2[arr2len2];
    

    for( int i=0; i<arr1len1; i++)
    {
        arr1[i] = arr[l+i];
    }

    for (int i=0; i<arr2len2;i++)
    {
        arr2[i] = arr[mid+1+i];
    }

    int i =0;
    int j=0;
    int k=l;

    while(i<arr1len1 && j<arr2len2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k] = arr1[i];
            k++; 
            i++;
        }

        else{
            arr[k] = arr2[j];
            k++;
            j++;
        }

    }

    //if our one the array ends and in another array we have
    // some elems left and we have to include them into our final array
    // so we will use while loop to do so
    // as we can't predict initially so we have to handle both cases of arr-1 and arr-2
    // that's why we are using here two while loops for adding remaning elems into final array
    while(i<arr1len1){
        arr[k] = arr1[i];
        k++;
        i++;
    }

    while(j<arr2len2){
        arr[k] = arr2[j];
        k++;
        j++;
    }
// printarr(a,n1);
// printarr(b,n2);

}

void mergesort(int arr[] , int l ,int r)
{
    if(l<r)
    {
        int mid = (l+r) /2 ;

        mergesort(arr , l , mid);
        mergesort(arr , mid+1 , r);

        merge(arr,l,mid,r);
    }
}

int main()
{
    int arr[] = {7,19,77,-5,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,len-1);
    printarr(arr,len);
    return 0;
}