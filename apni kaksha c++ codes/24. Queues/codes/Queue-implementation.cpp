#include<bits/stdc++.h>
using namespace std;
#define n 20

class Queue
{
    int* arr;
    int front;
    int back;
    public:
        Queue()
        {
            arr = new int[n];
            front=back=-1;
        }
        void enqueue(int x)
        {
            if(back==n-1)
            {
                cout<<"Queue Overflow\n";
                return;
            }
            back++;
            arr[back]=x;
            if(front==-1)
                front++;
        }
        void dequeue()
        {
            if(front==-1 || front>back)
            {
                cout<<"No element is present in queue\n";
                return;
            }
            front++;
        }
        int peek()
        {
            if(front==-1 || front>back)
            {
                cout<<"No element is present in queue\n";
                return -1;
            }
            return arr[front];
        }
        bool empty()
        {
            if(front==-1 || front>back)
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