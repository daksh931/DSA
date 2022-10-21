#include<iostream>
#include<list>
using namespace std;

int main()
{ 

    list<int> l1 {2,5,6,4,8,9,7};

    list<string> l2{"banana","apple","orange"};

    l2.push_back("starfruit");

    for(string x:l2)
    {
        cout<<x<<" ";
    }cout<<endl;

    //sorting
    l2.sort(); // sorted in type --> lexi
    for(string x:l2)
        {
            cout<<x<<" ";
        }cout<<endl;

    //reverse
    l2.reverse();
     for(string x:l2)
        {
            cout<<x<<" ";
        }cout<<endl;

    //remove
    l2.pop_front();
     for(string x:l2)
        {
            cout<<x<<" ";
        }cout<<endl;

    //remove last elem and adding in front;
    l2.push_front("kiwi");
    l2.pop_back();
    for(string x:l2)
        {
            cout<<x<<" ";
        }cout<<endl;

    //using iterator to iterate in list item
    for(auto it=l2.begin(); it!=l2.end(); it++)
    {
        cout<<(*it)<<endl;
    }cout<<endl;

    // remove at particular item
    l2.remove("kiwi");
    for(string x:l2)
        {
            cout<<x<<" ";
        }cout<<endl;


    //ading some more items
    cout<<endl;
    l2.push_front("mango");
    l2.push_front("melon");
    l2.push_front("kiwi");
    for(string x:l2)
        {
            cout<<x<<" ";
        }cout<<endl;


    //erase one or more items from list
    auto it = l2.begin();
    it++;     // as list does have sequence memory allocation so can't use (begin()+3)
    it++;     // used two times it++ so now we are at 2nd index in list
    l2.erase(it); // 2nd elem "mango" removed from list
    for(string x:l2)
        {
            cout<<x<<" ";
        }cout<<endl;
}