#include<iostream>
using namespace std;
#define n 100

class Stack
{
        int* arr;
        int top;
    public:
        Stack()
        {
            arr =new int[n];
            top=-1;
        }
        void push(int x)
        {
            if(top==n-1)
            {
                cout<<"Stack Overflow\n";
                return;
            }
            top++;
            arr[top]=x;
        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"Empty stack nothing to pop\n";
                return;
            }
            cout<<arr[top]<<" is poped out of stack"<<endl;
            top--;            
        }
        void Top()
        {
            if(top==-1)
            {
                cout<<"Empty stack\n";
                return;
            }
            cout<<arr[top]<<endl;
        }
        bool empty()
        {
            return top==-1;
        }
};


int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.Top();
    s.pop();
    s.pop();
    s.pop();
    s.empty();
    return 0;
}