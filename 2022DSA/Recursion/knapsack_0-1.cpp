#include <iostream>
using namespace std;

int knapsack(int w[], int v[],int n,int W)
{
    if(n==0 || W ==0) return 0;
    if(w[n-1]>W)
    {
        return knapsack(w,v,n-1,W);
    }

    return max(knapsack(w , v , n-1, W-w[n-1])+v[n-1]  , knapsack(w , v , n-1,W));
}

int main()
{
    int w[] = {2,4,6};
    int v[] = {10,20,30};
    int bagcap = 9;
   cout<<  knapsack(w,v,3,bagcap);

}