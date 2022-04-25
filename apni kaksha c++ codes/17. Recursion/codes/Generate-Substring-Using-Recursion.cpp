#include<iostream>
using namespace std;

void generateString(string s,string ans="")
{
    if(s.length()==0)   
    {
        cout<<ans<<endl;
        return;
    }
    char c = s[0];
    string ros = s.substr(1);
    generateString(ros,ans);
    generateString(ros,ans+c);
}


int main()
{
    generateString("ABC","");
    return 0;
}