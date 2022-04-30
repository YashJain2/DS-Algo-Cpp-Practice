#include<bits/stdc++.h>
using namespace std;

int postfixEvaluation(string s)
{
    stack <int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
            st.push(s[i]-'0');//pushing integers into stack
        else
        {
            int op2 = st.top(); st.pop();
            int op1 = st.top(); st.pop();
            cout<<op1<<" "<<op2<<endl;
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            default:
                cout<<"Not a valid statement\n";
                return -1;
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout<<postfixEvaluation("46+2/5*7+");
    return 0;
}
