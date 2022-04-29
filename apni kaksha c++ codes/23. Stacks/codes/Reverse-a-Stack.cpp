#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int ele)
{
    if(s.empty())
    {
        s.push(ele);
        return;
    }
    int topele = s.top();
    s.pop();
    insertAtBottom(s,ele);
    s.push(topele);
}

void reverse(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int topele = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,topele);
}

int main()
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    // while (!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    reverse(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}