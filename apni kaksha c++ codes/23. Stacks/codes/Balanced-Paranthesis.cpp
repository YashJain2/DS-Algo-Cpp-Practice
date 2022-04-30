#include<bits/stdc++.h>
using namespace std;

bool balancedParanthesis(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='[' || s[i]=='(' || s[i]=='{')
            st.push(s[i]);
        else
        {
            if(s[i]==')' && st.top()=='(' && (!st.empty()))
                st.pop();
            else if(s[i]=='}' && st.top()=='{' && (!st.empty()))
                st.pop();
            else if(s[i]==']' && st.top()=='[' && (!st.empty()))
                st.pop();
            else
                return false;
        }
    }
    return true;
}

int main()
{
    if(balancedParanthesis("({[]})"))
        cout<<"The Paranthesis are balanced\n";
    else
        cout<<"The Paranthesis are not balanced\n";
    return 0;
}