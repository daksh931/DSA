// Implementing a list in cpp
// need to be include list at Top
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> firstlist;
    firstlist.push_back(5);
    firstlist.push_back(8);
    firstlist.push_back(17);
    // need an iterator to get output from list using scope resolution operator --> :: 

    list<int> :: iterator iter;
    iter = firstlist.begin();
    

    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
}