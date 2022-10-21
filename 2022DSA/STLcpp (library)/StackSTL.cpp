#include<iostream>
#include <stack>
using namespace std;

//4 mainly used methods with stack

int main()
{ 
    stack <int> s;

    for(int i=0; i<=5; i++)
    {
        s.push(i);
    }

    while(!s.empty())
    {
        
        s.pop();
        cout<<s.top()<<" "<<endl;
    }


}