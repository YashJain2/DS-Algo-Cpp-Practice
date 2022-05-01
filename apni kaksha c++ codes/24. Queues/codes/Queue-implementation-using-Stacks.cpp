#include<bits/stdc++.h>
using namespace std;

class Queue
{
    stack <int> s1;
    stack <int> s2;
    public:
        void push(int x)
            s1.push(x);
        int pop()
        {
            while(s1.empty() && s2.empty())
            {
                cout<<" Queue is empty\n";
                return -1;
            }
            if(s2.empty())
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int topvalue s2.top();
            s2.pop();
            return topvalue;
        }
        bool empty()
        {
            if(s1.empty() && s2.empty())
                return true;
            return false;
        }
};

int main()
{
    
    return 0;
}