#include <bits/stdc++.h>
using namespace std;
#include <vector>


void charArray(string st)
{   if(st.empty()){
    return ;}
    if(st.length() == 1)
    {
        cout<<1;
        return;
    }
  
    vector<int> g1;

    for (int i = 1; i < st.length(); i++)
    {   
        for (int j = i-1; j >=0; j--)
         {   cout<<"Value of i : "<< i << " Value of j: "<<j<<endl;
            if(st[j] == st[i])
            {   
                g1.push_back(i-j+1);
                break;
                
            }
        }

    }
    
    if(g1.empty()) 
    {
        g1.push_back(st.length());
    }

    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    int res = *max_element(g1.begin(),g1.end());
    cout<<res;
}

int main()
{
    string st = "aab";

    charArray(st);

}