#include<bits/stdc++.h>
using namespace std;


class node
{
    public:
    int data;
    node * next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};


void Insert(int val , node* &head )
{
    
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }

    node * temp = head;
    while(temp->next !=NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    
}

void inseetAtHead(int val , node* & head)
{
    node* temp = head;
    node* n = new node(val);
    head = n;
    head->next = temp;
}

void printlinkedlist(node* head)
{
    if(head == NULL)
    {
        cout<<"empty linked list";
        return;
    }

    node* temp = head;
    while(temp !=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    } 
}

int main()
{
    node* head =NULL;
    Insert(5,head);
    Insert(10,head);
    Insert(15,head);
    Insert(20,head);
    inseetAtHead(1,head);
    inseetAtHead(2,head);

    printlinkedlist(head);
   
   
}

