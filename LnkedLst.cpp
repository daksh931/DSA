#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next; 
    node(int value)  // constructor which initializes value and pointing to null
    {
        data = value;   
        next = NULL;
    } // here Node* next is pointing to abother obj of class Node having [data+addr.]
};

// Node* means it is pointing to a class --> [data + address] 
// else simple pointer at one time can point to data(int) or only address(int) or String etc etc 

void InsertionAtTail(node* &head, int value ) // calling head by refrence(actual value also will get changed in list )
{   node* n = new node(value);
    
    // if no elem/node is present in list then head is NULL ...
    if (head == NULL)
    {
        head = n;
        return;
    } 

  
    node* temp = head; 
    while (temp->next !=NULL)
    {
        temp = temp->next;
    }
        temp->next = n;

}
void InsertatHead(node* &head ,int value)
{
    node* n = new node(value);
    n-> next = head;
    head = n;
}
void display(node* head)// calling head by value (don't change actual values)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//Searching in Linked List
bool search(node* head , int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data == key)
        {
            return true;
            
        }
        temp=temp->next;
    }
    return false;
}

int main()
{   
    node* head =NULL;
    
    InsertionAtTail(head,1);
    InsertionAtTail(head,4);
    InsertionAtTail(head,2);
    InsertatHead(head,55);
    display(head);
    cout<<search(head,5)<<endl; // as 5 doesn't exist in list so we will get 0 (false) as output
    cout<<search(head,4)<<endl; // as 4 exist so 1(true) as output

}