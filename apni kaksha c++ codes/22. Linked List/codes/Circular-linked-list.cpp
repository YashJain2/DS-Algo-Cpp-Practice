#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;
        node(int val)
        {
            data = val;
            next= NULL;
        }
};

void insertAtHead(node* &head, int val)
{
    node* temp= head;
    while(temp->next != head)
        temp=temp->next;
    node* n = new node(val);
    n->next=head;
    temp->next=n;
    head = n;
}


void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    //empty list
    if(head == NULL)
    {
        n->next=n;
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=head)
        temp=temp->next;
    temp->next=n;
    n->next=head;
}

void display(node* head)
{
    if(head == NULL)
        return;
    node* temp = head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"NULL\n";
}

int length(node* head)
{
    int length=0;
    node* temp = head;
    do
    {
        length++;
        temp=temp->next;
    } while (temp!=head);
    return length;
}

void deleteAtHead(node* & head)
{
    node* temp = head;
    while(temp->next!=head)
        temp=temp->next;
    node* n = head;
    temp->next = n->next;
    head = n->next;
    delete n;
}

void deleteNode(node* &head, int pos)
{
    if(head==NULL)
        return;
    if(pos==1)
    {
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int l = length(head);
    if(pos==l)
    {
        int x=l-1;
        while(--x)
            temp=temp->next;
        node* n = temp->next;
        temp->next = head;
        delete n;
        return;
    }
    int x = pos-1;
    while(--x)    
        temp=temp->next;
    node* n = temp->next;
    temp->next= n->next;
    delete n;
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