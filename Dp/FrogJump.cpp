// https://bit.ly/3JPcoOx
// Frog Jump code studio

#include <bits/stdc++.h> 

int f(int n ,vector<int> heights,vector<int> & store)
{
    if(n == 0)
    {
        return 0;
    }

    if(store[n] != -1)
    {
        return store[n];
    }
    int twojump = INT_MAX;
    int onejump = f(n-1, heights,store)+abs(heights[n]- heights[n-1]);
    if(n>1)
    {
         twojump = f(n-2, heights,store)+abs(heights[n]- heights[n-2]);
    }
    return store[n] = min(onejump, twojump);

}


int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector <int> store (n,-1);
    int ans = f(n-1, heights,store);
    return ans;

}
