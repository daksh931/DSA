#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare (string a , string b)
{
    if(a.length()==b.length())
    {
        return a<b;
    }
    return a.length()<b.length();
}


int main()
{
    int n;
    cin>>n;

    cin.get();
    string s[n];


    for (int i = 0; i < n; i++)
    {
        getline(cin,s[i]);
    }
    //intoducing compare which is defined by us above main Fn (we can use in sort pre-def Fn) 
    sort(s,s+n,compare); // sort base on lexi values of strings

    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    
    

}