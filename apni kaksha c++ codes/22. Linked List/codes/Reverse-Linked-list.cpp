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

void insertAtHead(node* &head, int val)
{
    node* n =new node(val);
    if(head==NULL)
    {
        head =n;
        return;
    }
    node *temp =head;
    head = n;
    head -> next = temp;
}

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


//iterative 3-pointer approach reverse a list
node* reverse(node* &head)
{
    node* prevptr = NULL;
    node* currptr = head;
    while(currptr != NULL)
    {
        node* nextptr = currptr -> next;
        currptr -> next = prevptr; // reversing the link
        //increasing the pointers
        prevptr = currptr;       
        currptr = nextptr; 
    }
    head = prevptr;
    return head;
}

// recursive version of node reversal 
node* recursiveReverse(node* &head)
{
    if(head->next == NULL || head == NULL)
        return head;
    node* newhead = recursiveReverse(head->next);
    head -> next -> next = head;
    head -> next = NULL;
    return newhead;
}
int main()
{
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,0);
    display(head);
    // node* newhead = reverse(head);
    node* newhead = recursiveReverse(head);
    newhead = reverse(newhead);
    display(newhead);
    return 0;
}