#include<iostream>
#include<map>
#include <string>
using namespace std;

// keys are ordered & maps are self balancing 
// key-value pairs 
int main()
{ 
    map<string,int> m;

    // Insert
    m.insert(make_pair("Mango",100));

    pair<string , int> p;
    p.first = "apple";
    p.second = 120;

    m.insert(p);

    m["banana"] =20;

    //search

    string fruit;
    cin>>fruit;

    // auto is iterator // you can use data type of "auto" to iterate
    // map <string,int> :: iterator it
    auto it = m.find(fruit);
    if(it!=m.end())
    {
        cout<<"price of "<<fruit <<" is "<<m[fruit]<<endl;
    }
    else
    {
        cout<<"fruit is not present "<<endl;
    }

    //update the price
    m[fruit] += 23; // update price of fruit

    m["litchi"] =60;
    m["melon"] = 50;

    for(auto it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first <<" and " <<it->second<<endl;
    }

    // erase (delete corresponding key-value pair from map)
    m.erase(fruit);



}