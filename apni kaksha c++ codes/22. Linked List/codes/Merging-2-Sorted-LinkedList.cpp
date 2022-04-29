#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};


void insertAtTail(node* &head,int data){
    node* temp1 = new node(data);
    if(head == NULL){
        head = temp1;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = temp1;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* merge(node* &head1,node* &head2){
    
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    node* result;
    if(head1 -> data < head2 ->data){
        result = head1;
        result -> next = merge(head1 -> next, head2);
    }
    else{
        result = head2;
        result -> next = merge(head1, head2 -> next);
    }
    return result;
}

node* mergeList(node* &head1, node* &head2)
{
    node* p1 = head1;
    node* p2 = head2;
    node* temp = new node(-1);
    node* p3=temp;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while (p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while (p2!=NULL)
    {
        p3->next=p1;
        p2=p2->next;
        p3=p3->next;
    }
    return temp->next;
}

int main()
{
    node* head1 = NULL;
    int arr1[] = {11,12,13,14,15,16,17,18,25,33,35,46,99};
    for(int i = 0; i< *(&arr1 + 1) - arr1; i++){
        insertAtTail(head1,arr1[i]);
    }
    node* head2 = NULL;
    int arr2[] = {2,3,4,9,14,53,54,87,94};
    for(int i = 0; i< *(&arr2 + 1) - arr2; i++){
        insertAtTail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node* merged = mergeList(head1,head2);
    display(merged);
    return 0;
}