// recursion subsequences
#include <bits/stdc++.h>
using namespace std;

void recursion(vector<int> v1, vector<int> &temp, vector<vector<int>> &ans, int idx)
{
    if (idx == v1.size())
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back(v1[idx]);
    recursion(v1, temp, ans, idx+1 );

    temp.pop_back();
    recursion(v1, temp, ans, idx+1 );

}

int main()
{
    vector<int> v1{1, 2, 3};

    // for (auto i = v1.begin(); i != v1.end(); i++)
    // {
    //     cout<<*i<<endl;
    // }

    vector<int> temp;

    vector<vector<int>> ans;
    recursion(v1, temp, ans, 0 );


// printing 2-D vector
   for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }    
        cout << endl;
    }
}