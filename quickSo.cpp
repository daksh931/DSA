#include <iostream>
using namespace std;
void printarr(int arr[], int len)
{
    cout << "Array is -> ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int pi(int arr[], int lo, int hi)
{
    int pi = arr[hi];
    int j = lo - 1;
    for (int i = lo; i < hi; i++)
    {
        if (arr[i] < pi)
        {
            j++;
            swap(arr,j, i);
        }
    }
    swap(arr, j + 1, hi);
    return j + 1;
}

void quicksort(int arr[], int lo, int hi)
{
    if (lo < hi)
    {
        cout << hi;
        int pivIndex = pi(arr, lo, hi);
        // cout << "pivIndex " << pivIndex;
        quicksort(arr, lo, pivIndex - 1);
        quicksort(arr, pivIndex + 1, hi);
    }
}

int main()
{
    int arr[] = {5, 8, -9, 1, 3,0, 7};
    int len = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, len - 1);

    printarr(arr, len);
}