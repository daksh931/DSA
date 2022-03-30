#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *previous;

    node(int value)
    {
        data = value;
        next = NULL;
        previous = NULL;
    }
};

void insertAtHead(node *&head, int value)
{
    node *n = new node(value);
    n->next = head;

    if (head != NULL)
    {
        head->previous = n;
    }

    head = n;
}

void insertAtTail(node *&head, int value)
{
    if (head == NULL)
    {
        insertAtHead(head, value);
        return;
    }
    node *n = new node(value); // creating and adding value to a new node...
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->previous = temp;
}

void HeadDel(node* &head)
{
        node* deletehead = head;
        head=deletehead->next;
        head->previous = NULL;
        delete deletehead;
       
}

void deletenode (node* &head, int position)
{
    if (position==1)
    {
        HeadDel(head);
    }

    node *temp = head;
    int count = 1;

    while (temp != NULL && count != position)
    {
        temp = temp->next;
        count++;
    }

    temp->previous->next = temp->next;

    if (temp->next != NULL)
    {
        temp->next->previous = temp->previous;
    }
    delete temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;

    insertAtTail(head, 4);
    insertAtTail(head, 2);
    insertAtHead(head, 5);

    display(head);
    
    deletenode(head,1); // enter ""position"" of node not* the value of node itself...

    display(head);
    return 0;
}