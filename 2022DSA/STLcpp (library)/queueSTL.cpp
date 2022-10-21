#include<iostream>
#include <queue>
using namespace std;

//4 mainly used methods with stack
// push pop front empty
int main()
{ 
    queue <int> q;

    
    for(int i=0; i<=5; i++)
    {
        q.push(i);
    }

    while(!q.empty())
    {
        cout<<q.front()<<" - "<<endl;
        q.pop();
        
    }

}