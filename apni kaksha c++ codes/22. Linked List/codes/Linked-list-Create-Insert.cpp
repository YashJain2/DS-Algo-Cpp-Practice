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

void deleteNode (node* &head, int val)
{
    //checks if the list is null
    if(head == NULL)
        return;
    //checks if the single item is present in a list
    if(head -> next == NULL)
    {
        if(head -> data ==val)
        {
            node *temp = head;
            head = NULL;
            delete temp;
            return;
        }
        return;
    }
    // checks if the deletion is at head
    if(head -> data ==val)
    {
        node *temp = head;
        head = head -> next;
        delete temp;
        return;
    }

    //deletion after the head node
    node* temp = head;
    //stores the previous node where deletion is to happen
    while(temp->next->data != val)
        temp = temp -> next;
    //stores the deletion node
    node* temp1 = temp->next;
    //previos node linking to node present after the deletion node
    temp->next = temp -> next -> next;
    //deleting the node with the given value
    delete temp1;
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

bool searchList(node* head,int key)
{
    if(head == NULL)
        return false;
    node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == key)
            return true;
        temp = temp -> next;
    }
    return false;
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

//reversing k nodes in the linked list
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
    display(head);
    insertAtHead(head,0);
    display(head);
    cout<<searchList(head,4)<<endl;
    cout<<searchList(head,3)<<endl;
    deleteNode(head,3);
    display(head);
    // node* newhead = reverse(head);
    node* newhead = recursiveReverse(head);
    newhead = reverse(newhead);
    display(newhead);

    //reversing k nodes
    // node* newhead = reversek(head,2);
    // newhead = reversek(newhead,2);
    // display(newhead);

    
    return 0;
}