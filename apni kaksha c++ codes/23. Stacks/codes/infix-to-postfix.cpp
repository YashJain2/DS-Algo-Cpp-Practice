#include<bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if(c=='^')
        return 3;
    if(c=='*' || c=='/')
        return 2;
    if(c=='+' || c=='-')
        return 1;
    return -1;
}

string infixToPostfix(string s)
{
    stack <char> st;
    string res;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            res+=s[i];
        else if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]==')')
        {
            while(st.top()!='(' && (!st.empty()))
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && precedence(st.top()) > precedence(s[i]))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}

int main()
{
    cout<<infixToPostfix("(a-b/c)*(a/k-l)");
    return 0;
}