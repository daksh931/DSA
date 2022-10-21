#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i=a; i<=b; i++)

class node{
    public:
    int data;
    node* prev;

    node(int val)
    {
        data = val; 
        prev =NULL;
    }

};

void multi(node* tail , int n)
{
    node* temp = tail;
    node *prevnode = tail;

    int carry = 0;
    while(temp!= NULL)
    {
        int data = temp->data * n +carry;
        temp->data = data%10;
        carry = data/10;
        prevnode = temp;
        temp=temp->prev;

    }

    while(carry!= 0)
    {
        prevnode->prev = new node((int)(carry%10));
        carry /=10;
        prevnode = prevnode->prev;
    }

}

void print(node* tail)
{
    if(tail == NULL)
    {
        return;
    }
    print(tail->prev);
    cout<<tail->data;
}

int main()
{
    int n = 100;
    node tail(1);

    rep(i,2,n)
        multi(&tail , i);

    print(&tail);
}