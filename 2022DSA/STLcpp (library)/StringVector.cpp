#include<iostream>
#include<vector>
using namespace std;

int main()
{ vector<int> v4{1,2,3,4,5,6,7};
    
    
        v4.push_back(9); // 9 added in vector v4 
        // generally complexity add elem is O(1) but in case of expanding memory take longer 
   
    for(int x : v4)
    {
        cout<<x<<" ";
    }cout<<endl;

    //remove last elem
    v4.pop_back();
    
    // insert in middle of vector
    v4.insert(v4.begin() +3 , 100); // inserting 100 at index-3
    v4.insert(v4.begin() +3 , 3,9); // inserting 9 at index-3 for 3 timees-->{_,_,_,9,9,9,_,_}

    //erase 3rd elem
    v4.erase(v4.begin()+3); // delete elem at index-3
    v4.erase(v4.begin()+3 , v4.begin()+5);
    // delete elem from index-3 to index-5

    // we avoid shrink 
    // we are decresing capacity and size --- capacity does not change
    v4.resize(8);
    cout<<v4.capacity()<<endl;

    //if we increase size --- capacity will increase 
    v4.resize(18);
    cout<<v4.capacity()<<endl;


    // remove all elems or delete all elems
    // v4.clear();

    // cout<<v4.size()<<endl;
    // cout<<v4.capacity()<<endl; // does not delete memory occupy by vector

    cout<<"Front elem in vector -> "<<v4.front()<<endl;

     for(int x : v4)
    {
        cout<<x<<" ";
    }cout<<endl;

    // while entering elems vecotr incr memory allocation which makes it slows
    // using 'reserve' function initially deifne memory capacity to vector solves it

    v4.reserve(1000);
}