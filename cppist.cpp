#include <iostream>
using namespace std;
int main()
{   int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    int sum=0;
    cout << "Enter the elements in array -- " ;
    
    for(int i=1; i<=n; i++)
    {
        
        cin >> arr[i];
        sum = sum + arr[i];
    }
    
    cout << "The sum of array is "<< sum;
    
    return 0;
}
