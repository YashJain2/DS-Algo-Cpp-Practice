#include<iostream>
using namespace std;

string removeDuplicate(string s)
{
    if(s.length()==0)
        return "";
    //first char
    char ch = s[0];
    string ans = removeDuplicate(s.substr(1));
    if(ch==ans[0])
        return ans;

    return (ch + ans);
}

string moveXToEnd(string s)
{
    if(s.length()==0)
        return "";
    char c = s[0];
    string ans = moveXToEnd(s.substr(1));
    if(c == 'x')
        return (ans + c);
    return c + ans ;
}

int main()
{
    // cout<<removeDuplicate("aaaagggdddfeeeiiodss");
    cout<<moveXToEnd("axxbixhxhdfx");
    return 0;
} 