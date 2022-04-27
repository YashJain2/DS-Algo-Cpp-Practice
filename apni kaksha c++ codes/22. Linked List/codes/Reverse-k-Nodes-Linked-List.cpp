#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;
        node(int val)
        {
            data = val;
            next=NULL;
        }
};

void insertAtTail(node * &head, int val)
{
    node *n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node *temp=head;
    while(temp -> next != NULL)
        temp = temp->next;
    temp->next = n;
}

void display(node* head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

//reversing k nodes in the link list
node* reversek(node* &head,int k)
{
    node* curptr = head;
    node* prevptr = NULL;
    node* nextptr;
    int count = 0;
    while(curptr != NULL && count < k){
        nextptr = curptr -> next;
        curptr ->next = prevptr;
        prevptr = curptr;
        curptr = nextptr;
        count++;
    }
    if(nextptr!= NULL){
        head ->next = reversek(nextptr,k); //recursive call for the next k nodes
    }
    return prevptr; //prevptr is returning the head
}


int main()
{
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    // node* newhead = reverse(head);
    node* newhead = reversek(head,2);
    newhead = reversek(newhead,2);
    display(newhead);

    return 0;
}