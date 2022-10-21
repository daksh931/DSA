#include<iostream>
#include <queue>
using namespace std;

//priority queue uses heap(means store in tree structure) 
// so push -- pop -- top methods have O(log n) complexity
int main()
{ 
    
    priority_queue <int> q;

    
    for(int i=0; i<=5; i++)
    {
        q.push(i);
    }

    while(!q.empty())
    {
        cout<<q.top()<<" - "<<endl;
        q.pop();
        
    }


}