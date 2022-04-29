#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data= val;
        next=NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node* n= new node(val);
    n->next = head;
    if(head!=NULL)
        head-> prev = n;
    head = n;
}

void insertAtTail (node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }

    node* n =new node(val);
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void deleteNode(node* &head, int val)
{
    if(head==NULL)
        return;
    //if single item is present in doubly linked list
    if(head->next==NULL)
    {
        if(head->data ==val)
            delete head;
        return;
    }
    //delete at head
    if(head->data == val)
    {
        node* temp = head;
        head->next->prev=NULL;
        head = head->next;
        delete temp;
        return;
    }
    node* temp = head;
    while(temp->data !=val)
    {
        temp=temp->next;
    }
    //checks for if the node is at last
    if(temp->next!=NULL)
        temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
}

void display(node* head)
{
    if(head == NULL)
    {
        return;
    }
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

int main()
{
    node* head;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,0);
    display(head);
    deleteNode(head,3);
    display(head);
    return 0;
}