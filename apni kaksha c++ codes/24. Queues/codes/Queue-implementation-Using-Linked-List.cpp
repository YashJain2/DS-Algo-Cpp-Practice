#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int val)
        {
            data = val;
            next=NULL;
        }
};

class Queue
{
    node* front;
    node* back;
    public:
        Queue()
        {
            front=NULL;
            back=NULL;
        }
        void enqueue(int x)
        {
            node* n = new node(x);
            if(front==NULL)
            {
                back=n;
                front=n;
                return;
            }
            back->next = n;
            back=n; 
        }
        void dequeue()
        {
            if(front==NULL)
            {
                cout<<"Queue Underflow\n";
                return;
            }
            node* temp = front;
            front=front->next;
            delete temp;
        }
        int peek()
        {
            if(front==NULL)
            {
                cout<<"Queue Underflow\n";
                return -1;
            }
            return front->data;
        }
        bool empty()
        {
            if(front==NULL)
                return true;
            else
                return false;
        }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<" ";
    q.dequeue();
    cout<<q.peek()<<" ";
    q.dequeue();
    cout<<q.peek()<<" ";
    q.dequeue();
    cout<<q.peek()<<" ";
    q.dequeue();
    if(q.empty())
        cout<<"\nEmpty queue\n";
    else
        cout<<"\nElements are still present in queue\n";
    return 0;
}