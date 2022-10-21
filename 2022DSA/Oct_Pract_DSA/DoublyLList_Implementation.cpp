#include<bits/stdc++.h>
using namespace std;

class node
{   public:
    int data;
    node* prev;
    node* next;

    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(int val, node* &head)
{   
    
    node* n = new  node(val);
    if(head== NULL)
    {
        head = n;
        return;
    }

    head->prev = n;
    n->next = head;
    head = n;

}
void insertAtTail(int val, node* &head)
{   node* n = new node(val);   
    if(head== NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next !=NULL)
    {
        temp= temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void printDLL(node* head)
{   while(head!= NULL)
    {
        cout<<" -->"<<head->data;
        head = head->next;
    }
}

void printRev_DLL(node* head)
{   while(head->next!= NULL)
    {
        
        head = head->next;
    }

    while(head !=NULL)
    {
        cout<<" -->"<<head->data;
        head = head->prev;
    }
}


void deletenode(int val , node* &head) 
{
    node* temp = head;

    if(head->data == val)
    {   
        head = temp->next;
        temp->next->prev = NULL;
        return;
        
    }
    
    while(temp->data != val)
    {
        temp = temp->next;
    }

    if(temp->data == val)
    {
        if(temp->next == NULL)
        {
            temp->prev->next = NULL;
            temp->prev = NULL;
        }

        else{
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
    }

}


int main()
{
    node* head = NULL;
    insertAtTail(5 , head);
    insertAtTail(10 , head);
    insertAtHead(1 , head);
    insertAtHead(4 , head);
    

    insertAtTail(66 , head);
    insertAtHead(56 , head);

    deletenode(4,head);

    printDLL(head);
    cout<<endl;
    printRev_DLL(head); // using prev pointers 
}



// 5 -->10 -->NULL

// ---- without Functions implementing 

// int main()
// {
//     node* head =NULL;
//     node* n = new node(5);

//     head = n;
//     cout<<head->data<<endl;

//     node* n2 = new node(10);
//     n2->prev = head;
//     head->next =n2;

//     cout<<head->next->data<<endl;
//     cout<<n2->data<<endl;
//     cout<<n2->prev->data<<endl;
// }