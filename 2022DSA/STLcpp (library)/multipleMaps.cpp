#include<iostream>
#include<map>
using namespace std;

//insert -- find -- erase ---> log(n) complexity

int main()
{
    multimap<char,string> m;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        string s;
        char c;
        cin>>c>>s;
        m.insert(make_pair(c,s));
    }cout<<endl;
    
    //iterator to print // else keyword 'auto' makes more easier to use iterator
    multimap<char,string>:: iterator it;
    for ( it =m.begin(); it !=m.end(); it++)
    {
        cout<<(*it).first << " "<<(*it).second<<endl;
    }cout<<endl;
    
    //for each loop to print
    for(auto p:m)
    {
        cout<<p.first <<" "<<p.second<<endl;
    }cout<<endl;

    auto it2 = m.lower_bound('b');
    auto it3 = m.upper_bound('d');

    for (auto it4 = it2; it4!=it3; it4++)
    {
        cout<<it4->second<<" "<<endl;
    }cout<<endl;
    

    auto f =m.find('c');
    if(f->second =="cat")
    {
        m.erase(f);  // cat get delete from map
    }

    for(auto p:m)
    {
        cout<<p.first <<" "<<p.second<<endl;
    }cout<<endl;

}